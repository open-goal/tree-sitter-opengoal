#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 10

enum {
  sym__ws = 1,
  sym_comment = 2,
  anon_sym_POUND_PIPE = 3,
  aux_sym_comment_multiline_token1 = 4,
  aux_sym_comment_multiline_token2 = 5,
  aux_sym_comment_multiline_token3 = 6,
  aux_sym_comment_multiline_token4 = 7,
  anon_sym_PIPE_POUND = 8,
  sym_num_lit = 9,
  aux_sym__kwd_unqualified_token1 = 10,
  anon_sym_COLON = 11,
  sym_str_lit = 12,
  sym_char_lit = 13,
  sym_null_lit = 14,
  sym_bool_lit = 15,
  aux_sym__sym_unqualified_token1 = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_SQUOTE = 19,
  anon_sym_BQUOTE = 20,
  anon_sym_COMMA_AT = 21,
  anon_sym_COMMA = 22,
  sym_source = 23,
  sym__gap = 24,
  sym_comment_multiline = 25,
  sym__form = 26,
  sym_kwd_lit = 27,
  sym_sym_lit = 28,
  sym_list_lit = 29,
  sym__bare_list_lit = 30,
  sym_quoting_lit = 31,
  sym_quasi_quoting_lit = 32,
  sym_unquote_splicing_lit = 33,
  sym_unquoting_lit = 34,
  aux_sym_source_repeat1 = 35,
  aux_sym_comment_multiline_repeat1 = 36,
  aux_sym__bare_list_lit_repeat1 = 37,
  aux_sym_quoting_lit_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_comment_multiline_token1] = "comment_multiline_token1",
  [aux_sym_comment_multiline_token2] = "comment_multiline_token2",
  [aux_sym_comment_multiline_token3] = "comment_multiline_token3",
  [aux_sym_comment_multiline_token4] = "comment_multiline_token4",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_num_lit] = "num_lit",
  [aux_sym__kwd_unqualified_token1] = "kwd_name",
  [anon_sym_COLON] = ":",
  [sym_str_lit] = "str_lit",
  [sym_char_lit] = "char_lit",
  [sym_null_lit] = "null_lit",
  [sym_bool_lit] = "bool_lit",
  [aux_sym__sym_unqualified_token1] = "sym_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_COMMA] = ",",
  [sym_source] = "source",
  [sym__gap] = "_gap",
  [sym_comment_multiline] = "comment_multiline",
  [sym__form] = "_form",
  [sym_kwd_lit] = "kwd_lit",
  [sym_sym_lit] = "sym_lit",
  [sym_list_lit] = "list_lit",
  [sym__bare_list_lit] = "_bare_list_lit",
  [sym_quoting_lit] = "quoting_lit",
  [sym_quasi_quoting_lit] = "quasi_quoting_lit",
  [sym_unquote_splicing_lit] = "unquote_splicing_lit",
  [sym_unquoting_lit] = "unquoting_lit",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_comment_multiline_repeat1] = "comment_multiline_repeat1",
  [aux_sym__bare_list_lit_repeat1] = "_bare_list_lit_repeat1",
  [aux_sym_quoting_lit_repeat1] = "quoting_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_comment_multiline_token1] = aux_sym_comment_multiline_token1,
  [aux_sym_comment_multiline_token2] = aux_sym_comment_multiline_token2,
  [aux_sym_comment_multiline_token3] = aux_sym_comment_multiline_token3,
  [aux_sym_comment_multiline_token4] = aux_sym_comment_multiline_token4,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_num_lit] = sym_num_lit,
  [aux_sym__kwd_unqualified_token1] = aux_sym__kwd_unqualified_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_str_lit] = sym_str_lit,
  [sym_char_lit] = sym_char_lit,
  [sym_null_lit] = sym_null_lit,
  [sym_bool_lit] = sym_bool_lit,
  [aux_sym__sym_unqualified_token1] = aux_sym__sym_unqualified_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_source] = sym_source,
  [sym__gap] = sym__gap,
  [sym_comment_multiline] = sym_comment_multiline,
  [sym__form] = sym__form,
  [sym_kwd_lit] = sym_kwd_lit,
  [sym_sym_lit] = sym_sym_lit,
  [sym_list_lit] = sym_list_lit,
  [sym__bare_list_lit] = sym__bare_list_lit,
  [sym_quoting_lit] = sym_quoting_lit,
  [sym_quasi_quoting_lit] = sym_quasi_quoting_lit,
  [sym_unquote_splicing_lit] = sym_unquote_splicing_lit,
  [sym_unquoting_lit] = sym_unquoting_lit,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_comment_multiline_repeat1] = aux_sym_comment_multiline_repeat1,
  [aux_sym__bare_list_lit_repeat1] = aux_sym__bare_list_lit_repeat1,
  [aux_sym_quoting_lit_repeat1] = aux_sym_quoting_lit_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_multiline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_multiline_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_multiline_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_multiline_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_num_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__kwd_unqualified_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_str_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_char_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sym_unqualified_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_multiline] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_kwd_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_sym_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_list_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__bare_list_lit] = {
    .visible = false,
    .named = true,
  },
  [sym_quoting_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_quasi_quoting_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splicing_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoting_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_multiline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bare_list_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoting_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_close = 1,
  field_marker = 2,
  field_name = 3,
  field_open = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_marker] = "marker",
  [field_name] = "name",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_close, 0, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [4] =
    {field_marker, 0},
    {field_name, 1},
  [6] =
    {field_close, 1},
    {field_open, 0},
  [8] =
    {field_value, 0},
  [9] =
    {field_marker, 0},
    {field_value, 1},
  [11] =
    {field_close, 2},
    {field_open, 0},
    {field_value, 1, .inherited = true},
  [14] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [16] =
    {field_marker, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static inline bool aux_sym__kwd_unqualified_token1_character_set_1(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < 28
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < ':'
        ? (c < '/'
          ? c == ','
          : c <= '/')
        : (c <= ';' || c == '@'))))
    : (c <= '^' || (c < 8192
      ? (c < '}'
        ? (c < '{'
          ? c == '`'
          : c <= '{')
        : (c <= '~' || c == 5760))
      : (c <= 8198 || (c < 8287
        ? (c < 8232
          ? (c >= 8200 && c <= 8202)
          : c <= 8233)
        : (c <= 8287 || c == 12288))))));
}

static inline bool aux_sym__kwd_unqualified_token1_character_set_2(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < 28
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < ';'
        ? (c < '/'
          ? c == ','
          : c <= '/')
        : (c <= ';' || c == '@'))))
    : (c <= '^' || (c < 8192
      ? (c < '}'
        ? (c < '{'
          ? c == '`'
          : c <= '{')
        : (c <= '~' || c == 5760))
      : (c <= 8198 || (c < 8287
        ? (c < 8232
          ? (c >= 8200 && c <= 8202)
          : c <= 8233)
        : (c <= 8287 || c == 12288))))));
}

static inline bool aux_sym__sym_unqualified_token1_character_set_1(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < 28
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < ';'
        ? (c < '/'
          ? c == ','
          : c <= '9')
        : (c <= ';' || c == '@'))))
    : (c <= '^' || (c < 8192
      ? (c < '}'
        ? (c < '{'
          ? c == '`'
          : c <= '{')
        : (c <= '~' || c == 5760))
      : (c <= 8198 || (c < 8287
        ? (c < 8232
          ? (c >= 8200 && c <= 8202)
          : c <= 8233)
        : (c <= 8287 || c == 12288))))));
}

static inline bool aux_sym__sym_unqualified_token1_character_set_2(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < 28
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < ';'
        ? (c < '/'
          ? c == ','
          : c <= '9')
        : (c <= ';' || (c >= '@' && c <= 'F')))))
    : (c <= '^' || (c < 8192
      ? (c < '}'
        ? (c < '{'
          ? (c >= '`' && c <= 'f')
          : c <= '{')
        : (c <= '~' || c == 5760))
      : (c <= 8198 || (c < 8287
        ? (c < 8232
          ? (c >= 8200 && c <= 8202)
          : c <= 8233)
        : (c <= 8287 || c == 12288))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '`') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == '|') ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          (28 <= lookahead && lookahead <= ' ') ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '|') ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead == '|') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 35:
      if (!aux_sym__kwd_unqualified_token1_character_set_1(lookahead)) ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != 'b' &&
          lookahead != 'f' &&
          lookahead != 'n' &&
          (lookahead < 'r' || 't' < lookahead)) ADVANCE(60);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(50);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '`') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(74);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          (28 <= lookahead && lookahead <= ' ') ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(77);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          (28 <= lookahead && lookahead <= ' ') ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__ws);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          (28 <= lookahead && lookahead <= ' ') ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_multiline_token1);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_multiline_token1);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_multiline_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_multiline_token1);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_multiline_token2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_multiline_token3);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_num_lit);
      if (lookahead == '.') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_num_lit);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_num_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_num_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__kwd_unqualified_token1);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_char_lit);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_char_lit);
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_char_lit);
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_char_lit);
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_char_lit);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_char_lit);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_char_lit);
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_null_lit);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_bool_lit);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == '#') ADVANCE(71);
      if (!aux_sym__sym_unqualified_token1_character_set_1(lookahead)) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(76);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == 'n') ADVANCE(72);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == 'o') ADVANCE(73);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (!aux_sym__sym_unqualified_token1_character_set_2(lookahead)) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(82);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_comment_multiline_token4] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [sym_num_lit] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_str_lit] = ACTIONS(1),
    [sym_char_lit] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [sym_bool_lit] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(36),
    [sym__gap] = STATE(6),
    [sym_comment_multiline] = STATE(6),
    [sym__form] = STATE(6),
    [sym_kwd_lit] = STATE(6),
    [sym_sym_lit] = STATE(6),
    [sym_list_lit] = STATE(6),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(6),
    [sym_quasi_quoting_lit] = STATE(6),
    [sym_unquote_splicing_lit] = STATE(6),
    [sym_unquoting_lit] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(5),
    [sym_char_lit] = ACTIONS(5),
    [sym_null_lit] = ACTIONS(11),
    [sym_bool_lit] = ACTIONS(5),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [2] = {
    [sym__gap] = STATE(2),
    [sym_comment_multiline] = STATE(2),
    [sym__form] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_sym_lit] = STATE(2),
    [sym_list_lit] = STATE(2),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(2),
    [sym_quasi_quoting_lit] = STATE(2),
    [sym_unquote_splicing_lit] = STATE(2),
    [sym_unquoting_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__ws] = ACTIONS(27),
    [sym_comment] = ACTIONS(27),
    [anon_sym_POUND_PIPE] = ACTIONS(30),
    [sym_num_lit] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(33),
    [sym_str_lit] = ACTIONS(27),
    [sym_char_lit] = ACTIONS(27),
    [sym_null_lit] = ACTIONS(36),
    [sym_bool_lit] = ACTIONS(27),
    [aux_sym__sym_unqualified_token1] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(48),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(54),
  },
  [3] = {
    [sym__gap] = STATE(4),
    [sym_comment_multiline] = STATE(4),
    [sym__form] = STATE(31),
    [sym_kwd_lit] = STATE(31),
    [sym_sym_lit] = STATE(31),
    [sym_list_lit] = STATE(31),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(31),
    [sym_quasi_quoting_lit] = STATE(31),
    [sym_unquote_splicing_lit] = STATE(31),
    [sym_unquoting_lit] = STATE(31),
    [aux_sym__bare_list_lit_repeat1] = STATE(4),
    [sym__ws] = ACTIONS(57),
    [sym_comment] = ACTIONS(57),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(59),
    [sym_char_lit] = ACTIONS(59),
    [sym_null_lit] = ACTIONS(61),
    [sym_bool_lit] = ACTIONS(59),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [4] = {
    [sym__gap] = STATE(5),
    [sym_comment_multiline] = STATE(5),
    [sym__form] = STATE(31),
    [sym_kwd_lit] = STATE(31),
    [sym_sym_lit] = STATE(31),
    [sym_list_lit] = STATE(31),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(31),
    [sym_quasi_quoting_lit] = STATE(31),
    [sym_unquote_splicing_lit] = STATE(31),
    [sym_unquoting_lit] = STATE(31),
    [aux_sym__bare_list_lit_repeat1] = STATE(5),
    [sym__ws] = ACTIONS(65),
    [sym_comment] = ACTIONS(65),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(59),
    [sym_char_lit] = ACTIONS(59),
    [sym_null_lit] = ACTIONS(61),
    [sym_bool_lit] = ACTIONS(59),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [5] = {
    [sym__gap] = STATE(5),
    [sym_comment_multiline] = STATE(5),
    [sym__form] = STATE(31),
    [sym_kwd_lit] = STATE(31),
    [sym_sym_lit] = STATE(31),
    [sym_list_lit] = STATE(31),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(31),
    [sym_quasi_quoting_lit] = STATE(31),
    [sym_unquote_splicing_lit] = STATE(31),
    [sym_unquoting_lit] = STATE(31),
    [aux_sym__bare_list_lit_repeat1] = STATE(5),
    [sym__ws] = ACTIONS(69),
    [sym_comment] = ACTIONS(69),
    [anon_sym_POUND_PIPE] = ACTIONS(72),
    [sym_num_lit] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_str_lit] = ACTIONS(75),
    [sym_char_lit] = ACTIONS(75),
    [sym_null_lit] = ACTIONS(81),
    [sym_bool_lit] = ACTIONS(75),
    [aux_sym__sym_unqualified_token1] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COMMA_AT] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(101),
  },
  [6] = {
    [sym__gap] = STATE(2),
    [sym_comment_multiline] = STATE(2),
    [sym__form] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_sym_lit] = STATE(2),
    [sym_list_lit] = STATE(2),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(2),
    [sym_quasi_quoting_lit] = STATE(2),
    [sym_unquote_splicing_lit] = STATE(2),
    [sym_unquoting_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym__ws] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(106),
    [sym_char_lit] = ACTIONS(106),
    [sym_null_lit] = ACTIONS(108),
    [sym_bool_lit] = ACTIONS(106),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [7] = {
    [sym__gap] = STATE(11),
    [sym_comment_multiline] = STATE(11),
    [sym__form] = STATE(18),
    [sym_kwd_lit] = STATE(18),
    [sym_sym_lit] = STATE(18),
    [sym_list_lit] = STATE(18),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(18),
    [sym_quasi_quoting_lit] = STATE(18),
    [sym_unquote_splicing_lit] = STATE(18),
    [sym_unquoting_lit] = STATE(18),
    [aux_sym_quoting_lit_repeat1] = STATE(11),
    [sym__ws] = ACTIONS(110),
    [sym_comment] = ACTIONS(110),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(112),
    [sym_char_lit] = ACTIONS(112),
    [sym_null_lit] = ACTIONS(114),
    [sym_bool_lit] = ACTIONS(112),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [8] = {
    [sym__gap] = STATE(14),
    [sym_comment_multiline] = STATE(14),
    [sym__form] = STATE(19),
    [sym_kwd_lit] = STATE(19),
    [sym_sym_lit] = STATE(19),
    [sym_list_lit] = STATE(19),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(19),
    [sym_quasi_quoting_lit] = STATE(19),
    [sym_unquote_splicing_lit] = STATE(19),
    [sym_unquoting_lit] = STATE(19),
    [aux_sym_quoting_lit_repeat1] = STATE(14),
    [sym__ws] = ACTIONS(116),
    [sym_comment] = ACTIONS(116),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(118),
    [sym_char_lit] = ACTIONS(118),
    [sym_null_lit] = ACTIONS(120),
    [sym_bool_lit] = ACTIONS(118),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [9] = {
    [sym__gap] = STATE(13),
    [sym_comment_multiline] = STATE(13),
    [sym__form] = STATE(21),
    [sym_kwd_lit] = STATE(21),
    [sym_sym_lit] = STATE(21),
    [sym_list_lit] = STATE(21),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(21),
    [sym_quasi_quoting_lit] = STATE(21),
    [sym_unquote_splicing_lit] = STATE(21),
    [sym_unquoting_lit] = STATE(21),
    [aux_sym_quoting_lit_repeat1] = STATE(13),
    [sym__ws] = ACTIONS(122),
    [sym_comment] = ACTIONS(122),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(124),
    [sym_char_lit] = ACTIONS(124),
    [sym_null_lit] = ACTIONS(126),
    [sym_bool_lit] = ACTIONS(124),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [10] = {
    [sym__gap] = STATE(12),
    [sym_comment_multiline] = STATE(12),
    [sym__form] = STATE(23),
    [sym_kwd_lit] = STATE(23),
    [sym_sym_lit] = STATE(23),
    [sym_list_lit] = STATE(23),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(23),
    [sym_quasi_quoting_lit] = STATE(23),
    [sym_unquote_splicing_lit] = STATE(23),
    [sym_unquoting_lit] = STATE(23),
    [aux_sym_quoting_lit_repeat1] = STATE(12),
    [sym__ws] = ACTIONS(128),
    [sym_comment] = ACTIONS(128),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(130),
    [sym_char_lit] = ACTIONS(130),
    [sym_null_lit] = ACTIONS(132),
    [sym_bool_lit] = ACTIONS(130),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [11] = {
    [sym__gap] = STATE(15),
    [sym_comment_multiline] = STATE(15),
    [sym__form] = STATE(27),
    [sym_kwd_lit] = STATE(27),
    [sym_sym_lit] = STATE(27),
    [sym_list_lit] = STATE(27),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(27),
    [sym_quasi_quoting_lit] = STATE(27),
    [sym_unquote_splicing_lit] = STATE(27),
    [sym_unquoting_lit] = STATE(27),
    [aux_sym_quoting_lit_repeat1] = STATE(15),
    [sym__ws] = ACTIONS(134),
    [sym_comment] = ACTIONS(134),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(136),
    [sym_char_lit] = ACTIONS(136),
    [sym_null_lit] = ACTIONS(138),
    [sym_bool_lit] = ACTIONS(136),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [12] = {
    [sym__gap] = STATE(15),
    [sym_comment_multiline] = STATE(15),
    [sym__form] = STATE(30),
    [sym_kwd_lit] = STATE(30),
    [sym_sym_lit] = STATE(30),
    [sym_list_lit] = STATE(30),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(30),
    [sym_quasi_quoting_lit] = STATE(30),
    [sym_unquote_splicing_lit] = STATE(30),
    [sym_unquoting_lit] = STATE(30),
    [aux_sym_quoting_lit_repeat1] = STATE(15),
    [sym__ws] = ACTIONS(134),
    [sym_comment] = ACTIONS(134),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(140),
    [sym_char_lit] = ACTIONS(140),
    [sym_null_lit] = ACTIONS(142),
    [sym_bool_lit] = ACTIONS(140),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [13] = {
    [sym__gap] = STATE(15),
    [sym_comment_multiline] = STATE(15),
    [sym__form] = STATE(29),
    [sym_kwd_lit] = STATE(29),
    [sym_sym_lit] = STATE(29),
    [sym_list_lit] = STATE(29),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(29),
    [sym_quasi_quoting_lit] = STATE(29),
    [sym_unquote_splicing_lit] = STATE(29),
    [sym_unquoting_lit] = STATE(29),
    [aux_sym_quoting_lit_repeat1] = STATE(15),
    [sym__ws] = ACTIONS(134),
    [sym_comment] = ACTIONS(134),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(144),
    [sym_char_lit] = ACTIONS(144),
    [sym_null_lit] = ACTIONS(146),
    [sym_bool_lit] = ACTIONS(144),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [14] = {
    [sym__gap] = STATE(15),
    [sym_comment_multiline] = STATE(15),
    [sym__form] = STATE(28),
    [sym_kwd_lit] = STATE(28),
    [sym_sym_lit] = STATE(28),
    [sym_list_lit] = STATE(28),
    [sym__bare_list_lit] = STATE(16),
    [sym_quoting_lit] = STATE(28),
    [sym_quasi_quoting_lit] = STATE(28),
    [sym_unquote_splicing_lit] = STATE(28),
    [sym_unquoting_lit] = STATE(28),
    [aux_sym_quoting_lit_repeat1] = STATE(15),
    [sym__ws] = ACTIONS(134),
    [sym_comment] = ACTIONS(134),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_num_lit] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(9),
    [sym_str_lit] = ACTIONS(148),
    [sym_char_lit] = ACTIONS(148),
    [sym_null_lit] = ACTIONS(150),
    [sym_bool_lit] = ACTIONS(148),
    [aux_sym__sym_unqualified_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(155), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(152), 2,
      sym__ws,
      sym_comment,
    ACTIONS(160), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    STATE(15), 3,
      sym__gap,
      sym_comment_multiline,
      aux_sym_quoting_lit_repeat1,
    ACTIONS(158), 9,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [29] = 2,
    ACTIONS(164), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(162), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [51] = 2,
    ACTIONS(168), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(166), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [73] = 2,
    ACTIONS(172), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(170), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [95] = 2,
    ACTIONS(176), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(174), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [117] = 2,
    ACTIONS(180), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(178), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [139] = 2,
    ACTIONS(184), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(182), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [161] = 2,
    ACTIONS(188), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(186), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [183] = 2,
    ACTIONS(192), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(190), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [205] = 2,
    ACTIONS(196), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(194), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [227] = 2,
    ACTIONS(200), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(198), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [249] = 2,
    ACTIONS(204), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(202), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [271] = 2,
    ACTIONS(208), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(206), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [293] = 2,
    ACTIONS(212), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(210), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [315] = 2,
    ACTIONS(216), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(214), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [337] = 2,
    ACTIONS(220), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(218), 14,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [359] = 2,
    ACTIONS(224), 3,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
      anon_sym_COMMA,
    ACTIONS(222), 13,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      sym_num_lit,
      anon_sym_COLON,
      sym_str_lit,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [380] = 4,
    ACTIONS(230), 1,
      anon_sym_PIPE_POUND,
    STATE(33), 1,
      aux_sym_comment_multiline_repeat1,
    ACTIONS(226), 2,
      aux_sym_comment_multiline_token1,
      aux_sym_comment_multiline_token4,
    ACTIONS(228), 2,
      aux_sym_comment_multiline_token2,
      aux_sym_comment_multiline_token3,
  [395] = 4,
    ACTIONS(236), 1,
      anon_sym_PIPE_POUND,
    STATE(34), 1,
      aux_sym_comment_multiline_repeat1,
    ACTIONS(232), 2,
      aux_sym_comment_multiline_token1,
      aux_sym_comment_multiline_token4,
    ACTIONS(234), 2,
      aux_sym_comment_multiline_token2,
      aux_sym_comment_multiline_token3,
  [410] = 4,
    ACTIONS(244), 1,
      anon_sym_PIPE_POUND,
    STATE(34), 1,
      aux_sym_comment_multiline_repeat1,
    ACTIONS(238), 2,
      aux_sym_comment_multiline_token1,
      aux_sym_comment_multiline_token4,
    ACTIONS(241), 2,
      aux_sym_comment_multiline_token2,
      aux_sym_comment_multiline_token3,
  [425] = 1,
    ACTIONS(246), 1,
      aux_sym__kwd_unqualified_token1,
  [429] = 1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 29,
  [SMALL_STATE(17)] = 51,
  [SMALL_STATE(18)] = 73,
  [SMALL_STATE(19)] = 95,
  [SMALL_STATE(20)] = 117,
  [SMALL_STATE(21)] = 139,
  [SMALL_STATE(22)] = 161,
  [SMALL_STATE(23)] = 183,
  [SMALL_STATE(24)] = 205,
  [SMALL_STATE(25)] = 227,
  [SMALL_STATE(26)] = 249,
  [SMALL_STATE(27)] = 271,
  [SMALL_STATE(28)] = 293,
  [SMALL_STATE(29)] = 315,
  [SMALL_STATE(30)] = 337,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 380,
  [SMALL_STATE(33)] = 395,
  [SMALL_STATE(34)] = 410,
  [SMALL_STATE(35)] = 425,
  [SMALL_STATE(36)] = 429,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(5),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(32),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(31),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(35),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(31),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(20),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(7),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(8),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(9),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 8), SHIFT_REPEAT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoting_lit_repeat1, 2), SHIFT_REPEAT(15),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoting_lit_repeat1, 2), SHIFT_REPEAT(32),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoting_lit_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoting_lit_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 1, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 1, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list_lit, 2, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list_lit, 2, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoting_lit, 2, .production_id = 6),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoting_lit, 2, .production_id = 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quoting_lit, 2, .production_id = 6),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasi_quoting_lit, 2, .production_id = 6),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sym_lit, 1, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sym_lit, 1, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing_lit, 2, .production_id = 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing_lit, 2, .production_id = 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwd_lit, 2, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kwd_lit, 2, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoting_lit, 2, .production_id = 6),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoting_lit, 2, .production_id = 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_multiline, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_multiline, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_multiline, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_multiline, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list_lit, 3, .production_id = 7),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list_lit, 3, .production_id = 7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoting_lit, 3, .production_id = 9),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoting_lit, 3, .production_id = 9),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quoting_lit, 3, .production_id = 9),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasi_quoting_lit, 3, .production_id = 9),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing_lit, 3, .production_id = 9),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing_lit, 3, .production_id = 9),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoting_lit, 3, .production_id = 9),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoting_lit, 3, .production_id = 9),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 1, .production_id = 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 1, .production_id = 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_multiline_repeat1, 2), SHIFT_REPEAT(34),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_multiline_repeat1, 2), SHIFT_REPEAT(34),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_multiline_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [248] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_opengoal(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
