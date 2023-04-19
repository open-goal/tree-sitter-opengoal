// Heavily stripped down - https://github.com/sogaiu/tree-sitter-clojure/
// TODO - incorporate some CL ideas from https://github.com/theHamsta/tree-sitter-commonlisp/blob/master/grammar.js

// java.lang.Character.isWhitespace
//
// Space Separator (Zs) but NOT including (U+00A0, U+2007, U+202F)
//   U+0020, U+1680, U+2000, U+2001, U+2002, U+2003, U+2004, U+2005,
//   U+2006, U+2008, U+2009, U+200A, U+205F, U+3000
// Line Separator (Zl)
//   U+2028
// Paragraph Separator (Zp)
//   U+2029
// Horizontal Tabulation
//   \t
// Line Feed
//   \n
// Vertical Tabulation
//   U+000B
// Form Feed
//   \f
// Carriage Return
//   \r
// File Separator
//   U+001C
// Group Separator
//   U+001D
// Record Separator
//   U+001E
// Unit Separator
//   U+001F
const WHITESPACE_CHAR =
  /[\f\n\r\t \u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const WHITESPACE =
  token(repeat1(WHITESPACE_CHAR));

// TODO - ugh support block comments
const COMMENT =
  token(/(;).*\n?/);

const COMMENT_MULTILINE_START =
  token('#|');

const COMMENT_MULTILINE_END =
  token('|#');

const DIGIT =
  /[0-9]/;

const HEX_DIGIT =
  /[0-9a-fA-F]/;

const BINARY_DIGIT =
  /[0-1]/;

const HEX_NUMBER =
  seq("#x",
    repeat1(HEX_DIGIT));

const BINARY_NUMBER =
  seq("#b",
    repeat1(BINARY_DIGIT));

const FLOAT =
  seq(repeat1(DIGIT),
    optional(seq(".",
      repeat(DIGIT))));

const INTEGER =
  seq(repeat1(DIGIT));

// TODO - does OG support negative hex/binary?
const NUMBER =
  token(prec(10, seq(optional(/[+-]/),
    choice(HEX_NUMBER,
      BINARY_NUMBER,
      FLOAT,
      INTEGER))));

const NULL =
  token('none');

// While technically anything other than #f is true, conventionally speaking #t is used to indicate true
const BOOLEAN =
  token(choice('#f',
    '#t'));

const KEYWORD_HEAD =
  /[^\f\n\r\t ()\[\]{}"@~^;`\\,:/\u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const KEYWORD_BODY =
  choice(/[:']/, KEYWORD_HEAD);

const KEYWORD_NO_SIGIL =
  token(seq(KEYWORD_HEAD,
    repeat(KEYWORD_BODY)));

const KEYWORD_MARK =
  token(":");

const STRING =
  token(seq('"',
    repeat(/[^"\\]/),
    repeat(seq("\\",
      /./,
      repeat(/[^"\\]/))),
    '"'));

const ANY_CHAR =
  /.|\n/;

const CHARACTER =
  token(seq("#\\",
    choice(ANY_CHAR, "\\s", "\\n", "\\t")));

// \u000B => <vertical tab>
// \u001C => <file separator>
// \u001D => <group separator>
// \u001E => <record separator>
// \u001F => <unit separator>
// \u2028 => <line separator>
// \u2029 => <paragraph separator>
// \u1680 => <ogham space mark>
// \u2000 => <en quad>
// \u2001 => <em quad>
// \u2002 => <en space>
// \u2003 => <em space>
// \u2004 => <three-per-em space>
// \u2005 => <four-per-em space>
// \u2006 => <six-per-em space>
// \u2008 => <punctuation space>
// \u2009 => <thin space>
// \u200a => <hair space>
// \u205f => <medium mathematical space>
// \u3000 => <ideographic space>
const SYMBOL_HEAD =
  /[^\f\n\r\t \/()\[\]{}"@~^;`\\,:#'0-9\u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const SYMBOL_BODY =
  choice(SYMBOL_HEAD,
    /[:#'0-9]/);

const SYMBOL =
  token(seq(SYMBOL_HEAD,
    repeat(SYMBOL_BODY)));

module.exports = grammar({
  name: 'opengoal',

  extras: $ =>
    [],

  conflicts: $ =>
    [],

  inline: $ =>
    [$._kwd_unqualified,
    $._sym_unqualified],

  rules: {
    // THIS MUST BE FIRST -- even though this doesn't look like it matters
    source: $ =>
      repeat(choice($._form,
        $._gap)),

    _gap: $ =>
      choice($._ws,
        $.comment,
        $.comment_multiline),

    _ws: $ =>
      WHITESPACE,

    comment: $ =>
      COMMENT,

    // ChatGPT generated -- beware!
    comment_multiline: $ =>
      seq(
        COMMENT_MULTILINE_START,
        repeat(choice(
          /[^|#]+/,
          /#[^|]/,
          /[^#]\|/,
          /[\n\r]+/
        )),
        COMMENT_MULTILINE_END
      ),

    _form: $ =>
      choice($.num_lit, // atom-ish
        $.kwd_lit,
        $.str_lit,
        $.char_lit,
        $.null_lit,
        $.bool_lit,
        $.sym_lit,
        // basic collection-ish
        $.list_lit,
        // some other reader macros
        $.quoting_lit,
        $.quasi_quoting_lit,
        $.unquote_splicing_lit,
        $.unquoting_lit),

    num_lit: $ =>
      NUMBER,

    kwd_lit: $ =>
      choice($._kwd_unqualified),

    _kwd_unqualified: $ =>
      prec(1, seq(field('marker', $._kwd_marker),
        field('name', alias(KEYWORD_NO_SIGIL, $.kwd_name)))),

    _kwd_marker: $ =>
      choice(KEYWORD_MARK),

    str_lit: $ =>
      STRING,

    char_lit: $ =>
      CHARACTER,

    null_lit: $ =>
      NULL,

    bool_lit: $ =>
      BOOLEAN,

    sym_lit: $ =>
      seq(choice($._sym_unqualified)),

    _sym_unqualified: $ =>
      field('name', alias(choice("/", SYMBOL),
        $.sym_name)),

    list_lit: $ =>
      seq($._bare_list_lit),

    _bare_list_lit: $ =>
      seq(field('open', "("),
        repeat(choice(field('value', $._form),
          $._gap)),
        field('close', ")")),

    quoting_lit: $ =>
      seq(field('marker', "'"),
        repeat($._gap),
        field('value', $._form)),

    quasi_quoting_lit: $ =>
      seq(field('marker', "`"),
        repeat($._gap),
        field('value', $._form)),

    unquote_splicing_lit: $ =>
      seq(field('marker', ",@"),
        repeat($._gap),
        field('value', $._form)),

    unquoting_lit: $ =>
      seq(field('marker', ","),
        repeat($._gap),
        field('value', $._form)),
  }
});
