// Heavily stripped down - https://github.com/sogaiu/tree-sitter-clojure/
// With some features taken from https://github.com/theHamsta/tree-sitter-commonlisp/blob/master/grammar.js

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

const WHITESPACE = token(repeat1(WHITESPACE_CHAR));

const COMMENT = token(/(;)[^\n]*/);

const BLOCK_COMMENT = token(
  seq("#|", repeat(choice(/[^|#]/, seq("#", /[^|]/), seq("|", /[^#]/))), "|#"),
);

const DIGIT = /[0-9]/;

const HEX_DIGIT = /[0-9a-fA-F]/;

const BINARY_DIGIT = /[0-1]/;

const HEX_NUMBER = seq("#x", repeat1(HEX_DIGIT));

const BINARY_NUMBER = seq("#b", repeat1(BINARY_DIGIT));

const FLOAT = seq(repeat1(DIGIT), optional(seq(".", repeat(DIGIT))));

const INTEGER = seq(repeat1(DIGIT));

// TODO - does OG support negative hex/binary?
const NUMBER = token(
  seq(optional(/[+-]/), choice(HEX_NUMBER, BINARY_NUMBER, FLOAT, INTEGER)),
);

const NULL = token("none");

// While technically anything other than #f is true, conventionally speaking #t is used to indicate true
const BOOLEAN = token(choice("#f", "#t"));

const KEYWORD_HEAD =
  /[^\f\n\r\t ()\[\]{}"@~^;`\\,:/\u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const KEYWORD_BODY = choice(/[:']/, KEYWORD_HEAD);

const KEYWORD = token(seq(":", KEYWORD_HEAD, repeat(KEYWORD_BODY)));

const ANY_CHAR = /.|\n/;

const CHARACTER = token(seq("#\\", choice(ANY_CHAR, "\\s", "\\n", "\\t")));

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
  /[^\f\n\r\t ()\[\]{}"@~^;`\\,:'0-9\u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const SYMBOL_BODY = choice(SYMBOL_HEAD, /[:#~'0-9\/]/);

const SYMBOL = token(seq(SYMBOL_HEAD, repeat(SYMBOL_BODY)));

// Define a rule specifically for symbols starting with digits followed by non-digit characters
const DIGIT_SYMBOL = token(
  seq(repeat1(DIGIT), SYMBOL_BODY, repeat(SYMBOL_BODY)),
);

const DEFUN_LIKE = choice("defun", "defmacro", "desfun");

const DEFENUM = choice("defenum");

const TYPE_DEF = choice("deftype");

const MULTI_BINDING_FORMS = choice("let", "let*");
const SINGLE_BINDING_FORMS = choice("dotimes", "countdown");

module.exports = grammar({
  name: "opengoal",

  extras: ($) => [],

  conflicts: ($) => [
    [$.behavior_expr],
    [$.defstate_expr],
    [$._form, $.typed_param],
  ],

  inline: ($) => [$._sym_unqualified],

  rules: {
    // THIS MUST BE FIRST -- even though this doesn't look like it matters
    source: ($) => repeat(choice($._form, $._gap)),

    _gap: ($) => choice($._ws, $.comment, $.block_comment),

    _ws: ($) => WHITESPACE,

    comment: ($) => COMMENT,

    block_comment: ($) => BLOCK_COMMENT,

    _form: ($) =>
      choice(
        $.num_lit,
        $.kwd_lit,
        $.str_lit,
        $.char_lit,
        $.null_lit,
        $.bool_lit,
        $.sym_lit,
        $.list_lit,
        $.quoting_lit,
        $.quasi_quoting_lit,
        $.unquote_splicing_lit,
        $.unquoting_lit,
      ),

    _form_without_string: ($) =>
      choice(
        $.num_lit,
        $.kwd_lit,
        $.char_lit,
        $.null_lit,
        $.bool_lit,
        $.sym_lit,
        $.list_lit,
        $.quoting_lit,
        $.quasi_quoting_lit,
        $.unquote_splicing_lit,
        $.unquoting_lit,
      ),

    num_lit: ($) => NUMBER,

    kwd_lit: ($) => KEYWORD,

    // https://opengoal.dev/docs/reference/lib/#format
    _format_token: ($) =>
      choice(alias(NUMBER, $.num_lit), seq("'", alias(/./, $.char_lit))),
    format_prefix_parameters: (_) => choice("v", "V", "#"),
    format_modifiers: ($) =>
      seq(repeat(choice($._format_token, ",")), choice("@", "@:", ":", ":@")),
    format_directive_type: ($) =>
      choice(
        seq(
          optional(field("repetitions", $._format_token)),
          choice("~", "%", "&", "|"),
        ),
        /[cC]/,
        /\^/,
        "\n",
        "\r",
        /[pP]/,
        /[iI]/,
        /[wW]/,
        /[aA]/,
        "_",
        /[()]/,
        /[{}]/,
        /[\[\]]/,
        /[<>]/,
        ";",
        "`",
        seq(field("numberOfArgs", $._format_token), "*"),
        "?",
        "Newline",
        seq(
          repeat(choice($._format_token, ",")),
          /[$AmMrRbBdDgGxXeEoOsStTfFHhJjKkLlNnVwWyYzZ]/,
        ),
      ),
    format_specifier: ($) =>
      prec.left(
        seq(
          "~",
          optional($.format_prefix_parameters),
          optional($.format_modifiers),
          prec(5, $.format_directive_type),
        ),
      ),

    str_lit: ($) =>
      seq(
        '"',
        repeat(
          choice(
            token.immediate(prec(1, /[^\\~"]+/)),
            token.immediate(seq(/\\./)),
            $.format_specifier,
          ),
        ),
        optional("~"),
        '"',
      ),

    char_lit: ($) => CHARACTER,

    null_lit: ($) => NULL,

    bool_lit: ($) => BOOLEAN,

    sym_lit: ($) => seq(choice($._sym_unqualified, $._digit_sym)),

    _digit_sym: ($) => field("name", alias(DIGIT_SYMBOL, $.sym_name)),

    _sym_unqualified: ($) =>
      field("name", alias(choice("/", SYMBOL), $.sym_name)),

    type_field_list: ($) =>
      seq("(", repeat(choice(field("field", $.type_field), $._gap)), ")"),

    type_field: ($) =>
      seq(
        "(",
        field("name", $.sym_lit),
        repeat1($._gap),
        field("type", $._type_ref),
        repeat(seq(repeat1($._gap), field("option", $.kwd_lit))),
        ")",
      ),

    type_states: ($) =>
      seq(
        "(",
        ":states",
        repeat(choice(field("state", $.sym_lit), $._gap)),
        ")",
      ),

    type_state_methods: ($) =>
      seq(
        "(",
        ":state-methods",
        repeat(choice(field("method", $.state_method), $._gap)),
        ")",
      ),

    state_method: ($) => choice($.sym_lit, $.state_method_signature),

    state_method_signature: ($) =>
      seq(
        "(",

        field("name", $.sym_lit),

        repeat1($._gap),

        field("param_type", $.sym_lit),

        repeat(choice(field("param_type", $.sym_lit), $._gap)),

        ")",
      ),

    type_methods: ($) =>
      seq(
        "(",
        ":methods",
        repeat(choice(field("method", $.method_definition), $._gap)),
        ")",
      ),

    _type_ref: ($) => choice($.sym_lit, $.null_lit),

    method_definition: ($) =>
      seq(
        "(",
        field("name", $.sym_lit),
        repeat($._gap),
        field("params", $.param_list),
        repeat($._gap),
        field("return_type", $._type_ref),
        ")",
      ),

    type_def: ($) =>
      prec(
        2,
        seq(
          field("open", "("),
          field("keyword", TYPE_DEF),

          repeat($._gap),

          field("name", $.sym_lit),

          repeat($._gap),

          optional(field("parent", $.type_parent)),

          repeat($._gap),

          optional(field("docstring", $.str_lit)),

          repeat($._gap),

          field("fields", $.type_field_list),

          repeat(
            choice(
              field("section", $.type_states),
              field("section", $.type_state_methods),
              field("section", $.type_methods),
              $._gap,
            ),
          ),

          field("close", ")"),
        ),
      ),

    type_parent: ($) => seq("(", field("name", $.sym_lit), ")"),

    defenum_expr: ($) =>
      prec(
        1,
        seq(
          field("open", "("),
          field("keyword", alias(DEFENUM, $.sym_name)),
          repeat($._gap),

          field("name", $.sym_lit),

          repeat(
            choice(
              $._gap,
              field("option", $.keyword_pair),
              field("entry", $.enum_entry),
            ),
          ),

          field("close", ")"),
        ),
      ),

    keyword_pair: ($) =>
      seq(field("keyword", $.kwd_lit), repeat($._gap), field("value", $._form)),

    enum_entry: ($) =>
      seq(
        "(",
        repeat($._gap),
        field("name", $.sym_lit),
        optional(seq(repeat1($._gap), field("value", $.num_lit))),
        repeat($._gap),
        ")",
      ),

    defstate_expr: ($) =>
      prec(
        2,
        seq(
          "(",
          "defstate",
          repeat($._gap),
          field("name", $.sym_lit),
          repeat1($._gap),
          field("parent", $.state_parent),
          optional(
            seq(
              repeat1($._gap),
              optional(field("docstring", $.str_lit)),
              repeat(choice($._defstate_field, $._gap)),
            ),
          ),
          repeat($._gap),
          ")",
        ),
      ),

    state_parent: ($) => seq("(", field("name", $.sym_lit), ")"),

    _defstate_field: ($) =>
      choice(
        $.keyword_pair, // :virtual #t
        $.event_handler,
        $.enter_handler,
        $.exit_handler,
        $.code_handler,
        $.post_handler,
      ),

    event_handler: ($) => seq(":event", repeat($._gap), $.sym_lit),

    enter_handler: ($) =>
      seq(":enter", repeat($._gap), choice($.behavior_expr, $.sym_lit)),

    exit_handler: ($) =>
      seq(":exit", repeat($._gap), choice($.behavior_expr, $.sym_lit)),

    code_handler: ($) => seq(":code", repeat($._gap), $.sym_lit),

    post_handler: ($) =>
      seq(":post", repeat($._gap), choice($.behavior_expr, $.sym_lit)),

    behavior_expr: ($) =>
      prec(
        2,
        seq(
          field("open", "("),
          field("keyword", "behavior"),
          repeat($._gap),
          field("params", $.param_list),
          optional(
            seq(
              repeat1($._gap),
              choice(
                field("docstring", $.str_lit),
                field("body", $._form_without_string),
              ),
              repeat(choice(field("body", $._form), $._gap)),
            ),
          ),
          repeat($._gap),
          field("close", ")"),
        ),
      ),

    method_param_list: ($) =>
      seq(
        "(",
        field("receiver", $.typed_param),
        repeat(choice(field("param", $.param), $._gap)),
        ")",
      ),

    defmethod_expr: ($) =>
      prec(
        2,
        seq(
          field("open", "("),
          field("keyword", "defmethod"),
          repeat($._gap),
          field("name", $.sym_lit),
          repeat($._gap),
          field("params", $.method_param_list),
          optional(
            seq(
              repeat1($._gap),
              choice(
                field("docstring", $.str_lit),
                field("body", $._form_without_string),
              ),
              repeat(choice(field("body", $._form), $._gap)),
            ),
          ),
          repeat($._gap),
          field("close", ")"),
        ),
      ),

    lambda_expr: ($) =>
      prec(
        2,
        seq(
          field("open", "("),
          field("keyword", "lambda"),
          repeat($._gap),
          field("params", $.param_list),
          optional(
            seq(
              repeat1($._gap),
              choice(
                field("docstring", $.str_lit),
                field("body", $._form_without_string),
              ),
              repeat(choice(field("body", $._form), $._gap)),
            ),
          ),
          repeat($._gap),
          field("close", ")"),
        ),
      ),

    defconstant_expr: ($) =>
      prec(
        2,
        seq(
          "(",
          "defconstant",
          repeat($._gap),
          field("name", $.sym_lit),
          repeat1($._gap),
          field("value", $._form),
          repeat($._gap),
          ")",
        ),
      ),

    define_expr: ($) =>
      prec(
        2,
        seq(
          "(",
          "define",
          repeat($._gap),
          field("name", $.sym_lit),
          repeat1($._gap),
          field("value", $._form),
          repeat($._gap),
          ")",
        ),
      ),

    binding_expr: ($) =>
      prec(
        2,
        seq(
          "(",
          field("keyword", alias(MULTI_BINDING_FORMS, $.sym_name)),
          repeat($._gap),
          field("bindings", $.binding_list),
          repeat1($._gap),
          field("body", $._form),
          repeat(choice(field("body", $._form), $._gap)),
          repeat($._gap),
          ")",
        ),
      ),

    binding_list: ($) =>
      seq("(", repeat(choice(field("binding", $.local_binding), $._gap)), ")"),

    local_binding: ($) =>
      seq(
        "(",
        field("name", $.sym_lit),
        repeat1($._gap),
        field("value", $._form),
        repeat($._gap),
        ")",
      ),

    single_binding_expr: ($) =>
      prec(
        2,
        seq(
          "(",
          field("keyword", alias(SINGLE_BINDING_FORMS, $.sym_name)),
          repeat($._gap),
          field("binding", $.local_binding),
          repeat1($._gap),
          field("body", $._form),
          repeat(choice(field("body", $._form), $._gap)),
          repeat($._gap),
          ")",
        ),
      ),

    list_lit: ($) =>
      choice(
        $.type_def,
        $.defun_expr,
        $.defmethod_expr,
        $.defenum_expr,
        $.defstate_expr,
        $.defconstant_expr,
        $.define_expr,
        $.behavior_expr,
        $.lambda_expr,
        $.binding_expr,
        $.single_binding_expr,
        $.call_expr,
        $._bare_list_lit,
      ),

    _bare_list_lit: ($) =>
      seq(
        field("open", "("),
        repeat(choice(field("value", $._form), $._gap)),
        field("close", ")"),
      ),

    typed_param: ($) =>
      seq(
        "(",
        field("name", $.sym_lit),
        repeat1($._gap),
        field("type", $.sym_lit),
        repeat($._gap),
        ")",
      ), // TODO - find a kwarg with default example add to corpus

    param: ($) => choice($.sym_lit, $.typed_param, $.kwarg_param),

    kwarg_param: ($) =>
      seq(
        "(",
        field("name", $.sym_lit),
        optional(seq(repeat($._gap), field("default", $._form))),
        repeat($._gap),
        ")",
      ),

    param_list: ($) =>
      seq("(", repeat(choice(field("param", $.param), $._gap)), ")"),

    defun_expr: ($) =>
      seq(
        field("open", "("),
        field("keyword", alias(DEFUN_LIKE, $.sym_name)),
        repeat($._gap),
        field("name", $.sym_lit),
        repeat($._gap),
        field("params", $.param_list),
        optional(
          seq(
            repeat1($._gap),
            choice(
              field("docstring", $.str_lit),
              field("body", $._form_without_string),
            ),
            repeat(choice(field("body", $._form), $._gap)),
          ),
        ),
        repeat($._gap),
        field("close", ")"),
      ),

    call_expr: ($) =>
      prec(
        1,
        seq(
          field("open", "("),
          field("callee", $.sym_lit),
          repeat(choice(field("arg", $._form), $._gap)),
          field("close", ")"),
        ),
      ),

    _non_call_form_inner: ($) =>
      choice(
        $.num_lit,
        $.kwd_lit,
        $.str_lit,
        $.char_lit,
        $.null_lit,
        $.bool_lit,
        $.sym_lit,
        $.quoting_lit,
        $.quasi_quoting_lit,
        $.unquote_splicing_lit,
        $.unquoting_lit,
        alias($._bare_list_lit, $.list_lit),
      ),

    quoting_lit: ($) =>
      seq(
        field("marker", "'"),
        repeat($._gap),
        field("value", $._non_call_form_inner),
      ),

    quasi_quoting_lit: ($) =>
      seq(field("marker", "`"), repeat($._gap), field("value", $._form)),

    unquote_splicing_lit: ($) =>
      seq(field("marker", ",@"), repeat($._gap), field("value", $._form)),

    unquoting_lit: ($) =>
      seq(field("marker", ","), repeat($._gap), field("value", $._form)),
  },
});
