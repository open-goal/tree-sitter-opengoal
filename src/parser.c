#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 13

enum {
  sym__ws = 1,
  sym_comment = 2,
  aux_sym_block_comment_content_token1 = 3,
  anon_sym_POUND_PIPE = 4,
  anon_sym_PIPE_POUND = 5,
  aux_sym_num_lit_token1 = 6,
  aux_sym__kwd_unqualified_token1 = 7,
  anon_sym_COLON = 8,
  anon_sym_SQUOTE = 9,
  aux_sym__format_token_token1 = 10,
  anon_sym_v = 11,
  anon_sym_V = 12,
  anon_sym_POUND = 13,
  anon_sym_COMMA = 14,
  anon_sym_AT = 15,
  anon_sym_AT_COLON = 16,
  anon_sym_COLON_AT = 17,
  anon_sym_TILDE = 18,
  anon_sym_PERCENT = 19,
  anon_sym_AMP = 20,
  anon_sym_PIPE = 21,
  aux_sym_format_directive_type_token1 = 22,
  aux_sym_format_directive_type_token2 = 23,
  anon_sym_LF = 24,
  anon_sym_CR = 25,
  aux_sym_format_directive_type_token3 = 26,
  aux_sym_format_directive_type_token4 = 27,
  aux_sym_format_directive_type_token5 = 28,
  aux_sym_format_directive_type_token6 = 29,
  anon_sym__ = 30,
  aux_sym_format_directive_type_token7 = 31,
  aux_sym_format_directive_type_token8 = 32,
  aux_sym_format_directive_type_token9 = 33,
  aux_sym_format_directive_type_token10 = 34,
  anon_sym_SEMI = 35,
  anon_sym_STAR = 36,
  anon_sym_QMARK = 37,
  anon_sym_Newline = 38,
  aux_sym_format_directive_type_token11 = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_str_lit_token1 = 41,
  aux_sym_str_lit_token2 = 42,
  sym_char_lit = 43,
  sym_null_lit = 44,
  sym_bool_lit = 45,
  anon_sym_SLASH = 46,
  aux_sym__sym_unqualified_token1 = 47,
  anon_sym_LPAREN = 48,
  anon_sym_RPAREN = 49,
  anon_sym_BQUOTE = 50,
  anon_sym_COMMA_AT = 51,
  sym_source = 52,
  sym__gap = 53,
  sym_block_comment_content = 54,
  sym_block_comment = 55,
  sym__form = 56,
  sym_num_lit = 57,
  sym_kwd_lit = 58,
  sym__kwd_marker = 59,
  sym__format_token = 60,
  sym_format_prefix_parameters = 61,
  sym_format_modifiers = 62,
  sym_format_directive_type = 63,
  sym_format_specifier = 64,
  sym_str_lit = 65,
  sym_sym_lit = 66,
  sym_list_lit = 67,
  sym__bare_list_lit = 68,
  sym_quoting_lit = 69,
  sym_quasi_quoting_lit = 70,
  sym_unquote_splicing_lit = 71,
  sym_unquoting_lit = 72,
  aux_sym_source_repeat1 = 73,
  aux_sym_block_comment_content_repeat1 = 74,
  aux_sym_format_modifiers_repeat1 = 75,
  aux_sym_str_lit_repeat1 = 76,
  aux_sym__bare_list_lit_repeat1 = 77,
  aux_sym_quoting_lit_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [aux_sym_block_comment_content_token1] = "block_comment_content_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [anon_sym_PIPE_POUND] = "|#",
  [aux_sym_num_lit_token1] = "num_lit_token1",
  [aux_sym__kwd_unqualified_token1] = "kwd_name",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__format_token_token1] = "char_lit",
  [anon_sym_v] = "v",
  [anon_sym_V] = "V",
  [anon_sym_POUND] = "#",
  [anon_sym_COMMA] = ",",
  [anon_sym_AT] = "@",
  [anon_sym_AT_COLON] = "@:",
  [anon_sym_COLON_AT] = ":@",
  [anon_sym_TILDE] = "~",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [aux_sym_format_directive_type_token1] = "format_directive_type_token1",
  [aux_sym_format_directive_type_token2] = "format_directive_type_token2",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [aux_sym_format_directive_type_token3] = "format_directive_type_token3",
  [aux_sym_format_directive_type_token4] = "format_directive_type_token4",
  [aux_sym_format_directive_type_token5] = "format_directive_type_token5",
  [aux_sym_format_directive_type_token6] = "format_directive_type_token6",
  [anon_sym__] = "_",
  [aux_sym_format_directive_type_token7] = "format_directive_type_token7",
  [aux_sym_format_directive_type_token8] = "format_directive_type_token8",
  [aux_sym_format_directive_type_token9] = "format_directive_type_token9",
  [aux_sym_format_directive_type_token10] = "format_directive_type_token10",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [anon_sym_Newline] = "Newline",
  [aux_sym_format_directive_type_token11] = "format_directive_type_token11",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_str_lit_token1] = "str_lit_token1",
  [aux_sym_str_lit_token2] = "str_lit_token2",
  [sym_char_lit] = "char_lit",
  [sym_null_lit] = "null_lit",
  [sym_bool_lit] = "bool_lit",
  [anon_sym_SLASH] = "sym_name",
  [aux_sym__sym_unqualified_token1] = "sym_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA_AT] = ",@",
  [sym_source] = "source",
  [sym__gap] = "_gap",
  [sym_block_comment_content] = "block_comment_content",
  [sym_block_comment] = "block_comment",
  [sym__form] = "_form",
  [sym_num_lit] = "num_lit",
  [sym_kwd_lit] = "kwd_lit",
  [sym__kwd_marker] = "_kwd_marker",
  [sym__format_token] = "_format_token",
  [sym_format_prefix_parameters] = "format_prefix_parameters",
  [sym_format_modifiers] = "format_modifiers",
  [sym_format_directive_type] = "format_directive_type",
  [sym_format_specifier] = "format_specifier",
  [sym_str_lit] = "str_lit",
  [sym_sym_lit] = "sym_lit",
  [sym_list_lit] = "list_lit",
  [sym__bare_list_lit] = "_bare_list_lit",
  [sym_quoting_lit] = "quoting_lit",
  [sym_quasi_quoting_lit] = "quasi_quoting_lit",
  [sym_unquote_splicing_lit] = "unquote_splicing_lit",
  [sym_unquoting_lit] = "unquoting_lit",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_comment_content_repeat1] = "block_comment_content_repeat1",
  [aux_sym_format_modifiers_repeat1] = "format_modifiers_repeat1",
  [aux_sym_str_lit_repeat1] = "str_lit_repeat1",
  [aux_sym__bare_list_lit_repeat1] = "_bare_list_lit_repeat1",
  [aux_sym_quoting_lit_repeat1] = "quoting_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [aux_sym_block_comment_content_token1] = aux_sym_block_comment_content_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [aux_sym_num_lit_token1] = aux_sym_num_lit_token1,
  [aux_sym__kwd_unqualified_token1] = aux_sym__kwd_unqualified_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__format_token_token1] = sym_char_lit,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_COLON] = anon_sym_AT_COLON,
  [anon_sym_COLON_AT] = anon_sym_COLON_AT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_format_directive_type_token1] = aux_sym_format_directive_type_token1,
  [aux_sym_format_directive_type_token2] = aux_sym_format_directive_type_token2,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [aux_sym_format_directive_type_token3] = aux_sym_format_directive_type_token3,
  [aux_sym_format_directive_type_token4] = aux_sym_format_directive_type_token4,
  [aux_sym_format_directive_type_token5] = aux_sym_format_directive_type_token5,
  [aux_sym_format_directive_type_token6] = aux_sym_format_directive_type_token6,
  [anon_sym__] = anon_sym__,
  [aux_sym_format_directive_type_token7] = aux_sym_format_directive_type_token7,
  [aux_sym_format_directive_type_token8] = aux_sym_format_directive_type_token8,
  [aux_sym_format_directive_type_token9] = aux_sym_format_directive_type_token9,
  [aux_sym_format_directive_type_token10] = aux_sym_format_directive_type_token10,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_Newline] = anon_sym_Newline,
  [aux_sym_format_directive_type_token11] = aux_sym_format_directive_type_token11,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_str_lit_token1] = aux_sym_str_lit_token1,
  [aux_sym_str_lit_token2] = aux_sym_str_lit_token2,
  [sym_char_lit] = sym_char_lit,
  [sym_null_lit] = sym_null_lit,
  [sym_bool_lit] = sym_bool_lit,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym__sym_unqualified_token1] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [sym_source] = sym_source,
  [sym__gap] = sym__gap,
  [sym_block_comment_content] = sym_block_comment_content,
  [sym_block_comment] = sym_block_comment,
  [sym__form] = sym__form,
  [sym_num_lit] = sym_num_lit,
  [sym_kwd_lit] = sym_kwd_lit,
  [sym__kwd_marker] = sym__kwd_marker,
  [sym__format_token] = sym__format_token,
  [sym_format_prefix_parameters] = sym_format_prefix_parameters,
  [sym_format_modifiers] = sym_format_modifiers,
  [sym_format_directive_type] = sym_format_directive_type,
  [sym_format_specifier] = sym_format_specifier,
  [sym_str_lit] = sym_str_lit,
  [sym_sym_lit] = sym_sym_lit,
  [sym_list_lit] = sym_list_lit,
  [sym__bare_list_lit] = sym__bare_list_lit,
  [sym_quoting_lit] = sym_quoting_lit,
  [sym_quasi_quoting_lit] = sym_quasi_quoting_lit,
  [sym_unquote_splicing_lit] = sym_unquote_splicing_lit,
  [sym_unquoting_lit] = sym_unquoting_lit,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_comment_content_repeat1] = aux_sym_block_comment_content_repeat1,
  [aux_sym_format_modifiers_repeat1] = aux_sym_format_modifiers_repeat1,
  [aux_sym_str_lit_repeat1] = aux_sym_str_lit_repeat1,
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
  [aux_sym_block_comment_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_num_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__kwd_unqualified_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__format_token_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_format_directive_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_directive_type_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_format_directive_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_directive_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_directive_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_directive_type_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_format_directive_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_directive_type_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_directive_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_directive_type_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Newline] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_format_directive_type_token11] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_str_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_lit_token2] = {
    .visible = false,
    .named = false,
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
  [anon_sym_SLASH] = {
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
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
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
  [sym_block_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_num_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_kwd_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__kwd_marker] = {
    .visible = false,
    .named = true,
  },
  [sym__format_token] = {
    .visible = false,
    .named = true,
  },
  [sym_format_prefix_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_format_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_format_directive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_format_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_str_lit] = {
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
  [aux_sym_block_comment_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_lit_repeat1] = {
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
  field_numberOfArgs = 4,
  field_open = 5,
  field_repetitions = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_marker] = "marker",
  [field_name] = "name",
  [field_numberOfArgs] = "numberOfArgs",
  [field_open] = "open",
  [field_repetitions] = "repetitions",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 1},
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
    {field_value, 1},
  [6] =
    {field_close, 1},
    {field_open, 0},
  [8] =
    {field_value, 0},
  [9] =
    {field_marker, 0},
    {field_name, 1},
  [11] =
    {field_marker, 0},
    {field_value, 2},
  [13] =
    {field_close, 2},
    {field_open, 0},
    {field_value, 1, .inherited = true},
  [16] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [18] =
    {field_repetitions, 0},
  [19] =
    {field_numberOfArgs, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [8] = {
    [0] = sym_num_lit,
  },
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
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
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

static inline bool aux_sym_str_lit_token1_character_set_1(int32_t c) {
  return (c < 'X'
    ? (c < 'O'
      ? (c < 'B'
        ? c == '$'
        : c <= 'G')
      : (c <= 'O' || (c >= 'R' && c <= 'T')))
    : (c <= 'X' || (c < 'r'
      ? (c < 'o'
        ? (c >= 'b' && c <= 'g')
        : c <= 'o')
      : (c <= 't' || c == 'x'))));
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
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == '`') ADVANCE(67);
      if (lookahead == 'v') ADVANCE(67);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '~') ADVANCE(44);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(67);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(67);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(67);
      if (('[' <= lookahead && lookahead <= ']')) ADVANCE(67);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(67);
      if (aux_sym_str_lit_token1_character_set_1(lookahead)) ADVANCE(67);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '&') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(61);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(7);
      if (lookahead == 'V') ADVANCE(37);
      if (lookahead == '^') ADVANCE(49);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '~') ADVANCE(44);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(3);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(60);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(54);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(59);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(58);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym_str_lit_token1_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '~') ADVANCE(44);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == '|') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 16:
      if (!aux_sym__kwd_unqualified_token1_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(70);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(78);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          (28 <= lookahead && lookahead <= ' ') ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(81);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__ws);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          (28 <= lookahead && lookahead <= ' ') ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_block_comment_content_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_num_lit_token1);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_num_lit_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_num_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_num_lit_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__kwd_unqualified_token1);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '@') ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__format_token_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(85);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_AT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token2);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token3);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token4);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token5);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token6);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token9);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token10);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Newline);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_format_directive_type_token11);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_str_lit_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '~') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_str_lit_token2);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_char_lit);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_char_lit);
      if (lookahead == 'n' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_null_lit);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_bool_lit);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == '#') ADVANCE(75);
      if (!aux_sym__sym_unqualified_token1_character_set_1(lookahead)) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'x') ADVANCE(80);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == 'n') ADVANCE(76);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == 'o') ADVANCE(77);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (!aux_sym__sym_unqualified_token1_character_set_2(lookahead)) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__sym_unqualified_token1);
      if (!aux_sym__kwd_unqualified_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_block_comment_content_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__format_token_token1] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_format_directive_type_token1] = ACTIONS(1),
    [aux_sym_format_directive_type_token2] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [aux_sym_format_directive_type_token3] = ACTIONS(1),
    [aux_sym_format_directive_type_token4] = ACTIONS(1),
    [aux_sym_format_directive_type_token5] = ACTIONS(1),
    [aux_sym_format_directive_type_token6] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym_format_directive_type_token7] = ACTIONS(1),
    [aux_sym_format_directive_type_token8] = ACTIONS(1),
    [aux_sym_format_directive_type_token9] = ACTIONS(1),
    [aux_sym_format_directive_type_token10] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_format_directive_type_token11] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_str_lit_token1] = ACTIONS(1),
    [sym_char_lit] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(66),
    [sym__gap] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym__form] = STATE(10),
    [sym_num_lit] = STATE(10),
    [sym_kwd_lit] = STATE(10),
    [sym__kwd_marker] = STATE(65),
    [sym_str_lit] = STATE(10),
    [sym_sym_lit] = STATE(10),
    [sym_list_lit] = STATE(10),
    [sym__bare_list_lit] = STATE(42),
    [sym_quoting_lit] = STATE(10),
    [sym_quasi_quoting_lit] = STATE(10),
    [sym_unquote_splicing_lit] = STATE(10),
    [sym_unquoting_lit] = STATE(10),
    [aux_sym_source_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [aux_sym_num_lit_token1] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_char_lit] = ACTIONS(5),
    [sym_null_lit] = ACTIONS(19),
    [sym_bool_lit] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(21),
    [aux_sym__sym_unqualified_token1] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(31), 1,
      aux_sym_num_lit_token1,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_format_prefix_parameters,
    STATE(21), 1,
      sym_format_modifiers,
    STATE(45), 1,
      sym__format_token,
    STATE(47), 1,
      aux_sym_format_modifiers_repeat1,
    STATE(54), 1,
      sym_format_directive_type,
    ACTIONS(33), 2,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(37), 2,
      anon_sym_v,
      anon_sym_V,
    ACTIONS(43), 2,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
    ACTIONS(45), 21,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_format_directive_type_token1,
      aux_sym_format_directive_type_token2,
      anon_sym_LF,
      anon_sym_CR,
      aux_sym_format_directive_type_token3,
      aux_sym_format_directive_type_token4,
      aux_sym_format_directive_type_token5,
      aux_sym_format_directive_type_token6,
      anon_sym__,
      aux_sym_format_directive_type_token7,
      aux_sym_format_directive_type_token8,
      aux_sym_format_directive_type_token9,
      aux_sym_format_directive_type_token10,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_Newline,
      aux_sym_format_directive_type_token11,
  [66] = 14,
    ACTIONS(31), 1,
      aux_sym_num_lit_token1,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_format_prefix_parameters,
    STATE(21), 1,
      sym_format_modifiers,
    STATE(45), 1,
      sym__format_token,
    STATE(47), 1,
      aux_sym_format_modifiers_repeat1,
    STATE(54), 1,
      sym_format_directive_type,
    ACTIONS(33), 2,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(37), 2,
      anon_sym_v,
      anon_sym_V,
    ACTIONS(43), 2,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
    ACTIONS(45), 21,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_format_directive_type_token1,
      aux_sym_format_directive_type_token2,
      anon_sym_LF,
      anon_sym_CR,
      aux_sym_format_directive_type_token3,
      aux_sym_format_directive_type_token4,
      aux_sym_format_directive_type_token5,
      aux_sym_format_directive_type_token6,
      anon_sym__,
      aux_sym_format_directive_type_token7,
      aux_sym_format_directive_type_token8,
      aux_sym_format_directive_type_token9,
      aux_sym_format_directive_type_token10,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_Newline,
      aux_sym_format_directive_type_token11,
  [132] = 13,
    ACTIONS(31), 1,
      aux_sym_num_lit_token1,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      sym_format_prefix_parameters,
    STATE(21), 1,
      sym_format_modifiers,
    STATE(45), 1,
      sym__format_token,
    STATE(47), 1,
      aux_sym_format_modifiers_repeat1,
    STATE(54), 1,
      sym_format_directive_type,
    ACTIONS(33), 2,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(37), 2,
      anon_sym_v,
      anon_sym_V,
    ACTIONS(43), 2,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
    ACTIONS(45), 21,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_format_directive_type_token1,
      aux_sym_format_directive_type_token2,
      anon_sym_LF,
      anon_sym_CR,
      aux_sym_format_directive_type_token3,
      aux_sym_format_directive_type_token4,
      aux_sym_format_directive_type_token5,
      aux_sym_format_directive_type_token6,
      anon_sym__,
      aux_sym_format_directive_type_token7,
      aux_sym_format_directive_type_token8,
      aux_sym_format_directive_type_token9,
      aux_sym_format_directive_type_token10,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_Newline,
      aux_sym_format_directive_type_token11,
  [195] = 10,
    ACTIONS(31), 1,
      aux_sym_num_lit_token1,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      sym_format_modifiers,
    STATE(45), 1,
      sym__format_token,
    STATE(47), 1,
      aux_sym_format_modifiers_repeat1,
    STATE(57), 1,
      sym_format_directive_type,
    ACTIONS(33), 2,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(43), 2,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
    ACTIONS(45), 21,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_format_directive_type_token1,
      aux_sym_format_directive_type_token2,
      anon_sym_LF,
      anon_sym_CR,
      aux_sym_format_directive_type_token3,
      aux_sym_format_directive_type_token4,
      aux_sym_format_directive_type_token5,
      aux_sym_format_directive_type_token6,
      anon_sym__,
      aux_sym_format_directive_type_token7,
      aux_sym_format_directive_type_token8,
      aux_sym_format_directive_type_token9,
      aux_sym_format_directive_type_token10,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_Newline,
      aux_sym_format_directive_type_token11,
  [248] = 19,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(55), 1,
      sym_null_lit,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(51), 2,
      sym__ws,
      sym_comment,
    ACTIONS(53), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(7), 3,
      sym__gap,
      sym_block_comment,
      aux_sym__bare_list_lit_repeat1,
    STATE(43), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [319] = 19,
    ACTIONS(62), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(65), 1,
      aux_sym_num_lit_token1,
    ACTIONS(68), 1,
      anon_sym_COLON,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(86), 1,
      anon_sym_SLASH,
    ACTIONS(89), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(100), 1,
      anon_sym_COMMA_AT,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(59), 2,
      sym__ws,
      sym_comment,
    ACTIONS(80), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(7), 3,
      sym__gap,
      sym_block_comment,
      aux_sym__bare_list_lit_repeat1,
    STATE(43), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [390] = 19,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(55), 1,
      sym_null_lit,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(53), 2,
      sym_char_lit,
      sym_bool_lit,
    ACTIONS(103), 2,
      sym__ws,
      sym_comment,
    STATE(6), 3,
      sym__gap,
      sym_block_comment,
      aux_sym__bare_list_lit_repeat1,
    STATE(43), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [461] = 17,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(115), 1,
      aux_sym_num_lit_token1,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_null_lit,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_COMMA_AT,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(109), 4,
      sym__ws,
      sym_comment,
      sym_char_lit,
      sym_bool_lit,
    STATE(9), 13,
      sym__gap,
      sym_block_comment,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
      aux_sym_source_repeat1,
  [528] = 17,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym_null_lit,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(150), 4,
      sym__ws,
      sym_comment,
      sym_char_lit,
      sym_bool_lit,
    STATE(9), 13,
      sym__gap,
      sym_block_comment,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
      aux_sym_source_repeat1,
  [595] = 18,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(158), 1,
      sym_null_lit,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(154), 2,
      sym__ws,
      sym_comment,
    ACTIONS(156), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(24), 3,
      sym__gap,
      sym_block_comment,
      aux_sym_quoting_lit_repeat1,
    STATE(34), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [663] = 18,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(164), 1,
      sym_null_lit,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(160), 2,
      sym__ws,
      sym_comment,
    ACTIONS(162), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(11), 3,
      sym__gap,
      sym_block_comment,
      aux_sym_quoting_lit_repeat1,
    STATE(38), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [731] = 18,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(168), 1,
      sym_null_lit,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(154), 2,
      sym__ws,
      sym_comment,
    ACTIONS(166), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(24), 3,
      sym__gap,
      sym_block_comment,
      aux_sym_quoting_lit_repeat1,
    STATE(32), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [799] = 18,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(174), 1,
      sym_null_lit,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(170), 2,
      sym__ws,
      sym_comment,
    ACTIONS(172), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(17), 3,
      sym__gap,
      sym_block_comment,
      aux_sym_quoting_lit_repeat1,
    STATE(29), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [867] = 18,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(178), 1,
      sym_null_lit,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(154), 2,
      sym__ws,
      sym_comment,
    ACTIONS(176), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(24), 3,
      sym__gap,
      sym_block_comment,
      aux_sym_quoting_lit_repeat1,
    STATE(26), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [935] = 18,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(184), 1,
      sym_null_lit,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(180), 2,
      sym__ws,
      sym_comment,
    ACTIONS(182), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(13), 3,
      sym__gap,
      sym_block_comment,
      aux_sym_quoting_lit_repeat1,
    STATE(27), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [1003] = 18,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(188), 1,
      sym_null_lit,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(154), 2,
      sym__ws,
      sym_comment,
    ACTIONS(186), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(24), 3,
      sym__gap,
      sym_block_comment,
      aux_sym_quoting_lit_repeat1,
    STATE(39), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [1071] = 18,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      aux_sym_num_lit_token1,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      aux_sym__sym_unqualified_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_COMMA_AT,
    ACTIONS(194), 1,
      sym_null_lit,
    STATE(42), 1,
      sym__bare_list_lit,
    STATE(65), 1,
      sym__kwd_marker,
    ACTIONS(190), 2,
      sym__ws,
      sym_comment,
    ACTIONS(192), 2,
      sym_char_lit,
      sym_bool_lit,
    STATE(15), 3,
      sym__gap,
      sym_block_comment,
      aux_sym_quoting_lit_repeat1,
    STATE(35), 10,
      sym__form,
      sym_num_lit,
      sym_kwd_lit,
      sym_str_lit,
      sym_sym_lit,
      sym_list_lit,
      sym_quoting_lit,
      sym_quasi_quoting_lit,
      sym_unquote_splicing_lit,
      sym_unquoting_lit,
  [1139] = 2,
    ACTIONS(198), 2,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(196), 26,
      aux_sym_num_lit_token1,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_format_directive_type_token1,
      aux_sym_format_directive_type_token2,
      anon_sym_LF,
      anon_sym_CR,
      aux_sym_format_directive_type_token3,
      aux_sym_format_directive_type_token4,
      aux_sym_format_directive_type_token5,
      aux_sym_format_directive_type_token6,
      anon_sym__,
      aux_sym_format_directive_type_token7,
      aux_sym_format_directive_type_token8,
      aux_sym_format_directive_type_token9,
      aux_sym_format_directive_type_token10,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_Newline,
      aux_sym_format_directive_type_token11,
  [1172] = 7,
    ACTIONS(31), 1,
      aux_sym_num_lit_token1,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      sym__format_token,
    STATE(51), 1,
      aux_sym_format_modifiers_repeat1,
    STATE(59), 1,
      sym_format_directive_type,
    ACTIONS(45), 21,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_format_directive_type_token1,
      aux_sym_format_directive_type_token2,
      anon_sym_LF,
      anon_sym_CR,
      aux_sym_format_directive_type_token3,
      aux_sym_format_directive_type_token4,
      aux_sym_format_directive_type_token5,
      aux_sym_format_directive_type_token6,
      anon_sym__,
      aux_sym_format_directive_type_token7,
      aux_sym_format_directive_type_token8,
      aux_sym_format_directive_type_token9,
      aux_sym_format_directive_type_token10,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_Newline,
      aux_sym_format_directive_type_token11,
  [1214] = 7,
    ACTIONS(31), 1,
      aux_sym_num_lit_token1,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      sym__format_token,
    STATE(51), 1,
      aux_sym_format_modifiers_repeat1,
    STATE(57), 1,
      sym_format_directive_type,
    ACTIONS(45), 21,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_format_directive_type_token1,
      aux_sym_format_directive_type_token2,
      anon_sym_LF,
      anon_sym_CR,
      aux_sym_format_directive_type_token3,
      aux_sym_format_directive_type_token4,
      aux_sym_format_directive_type_token5,
      aux_sym_format_directive_type_token6,
      anon_sym__,
      aux_sym_format_directive_type_token7,
      aux_sym_format_directive_type_token8,
      aux_sym_format_directive_type_token9,
      aux_sym_format_directive_type_token10,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_Newline,
      aux_sym_format_directive_type_token11,
  [1256] = 1,
    ACTIONS(202), 24,
      aux_sym_num_lit_token1,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_format_directive_type_token1,
      aux_sym_format_directive_type_token2,
      anon_sym_LF,
      anon_sym_CR,
      aux_sym_format_directive_type_token3,
      aux_sym_format_directive_type_token4,
      aux_sym_format_directive_type_token5,
      aux_sym_format_directive_type_token6,
      anon_sym__,
      aux_sym_format_directive_type_token7,
      aux_sym_format_directive_type_token8,
      aux_sym_format_directive_type_token9,
      aux_sym_format_directive_type_token10,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_Newline,
      aux_sym_format_directive_type_token11,
  [1283] = 1,
    ACTIONS(204), 24,
      aux_sym_num_lit_token1,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_format_directive_type_token1,
      aux_sym_format_directive_type_token2,
      anon_sym_LF,
      anon_sym_CR,
      aux_sym_format_directive_type_token3,
      aux_sym_format_directive_type_token4,
      aux_sym_format_directive_type_token5,
      aux_sym_format_directive_type_token6,
      anon_sym__,
      aux_sym_format_directive_type_token7,
      aux_sym_format_directive_type_token8,
      aux_sym_format_directive_type_token9,
      aux_sym_format_directive_type_token10,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_Newline,
      aux_sym_format_directive_type_token11,
  [1310] = 5,
    ACTIONS(209), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(206), 2,
      sym__ws,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    STATE(24), 3,
      sym__gap,
      sym_block_comment,
      aux_sym_quoting_lit_repeat1,
    ACTIONS(212), 10,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1340] = 2,
    ACTIONS(218), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(216), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1363] = 2,
    ACTIONS(222), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(220), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1386] = 2,
    ACTIONS(226), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(224), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1409] = 2,
    ACTIONS(230), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(228), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1432] = 2,
    ACTIONS(234), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(232), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1455] = 2,
    ACTIONS(238), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(236), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1478] = 2,
    ACTIONS(242), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(240), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1501] = 2,
    ACTIONS(246), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(244), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1524] = 2,
    ACTIONS(250), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(248), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1547] = 2,
    ACTIONS(254), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(252), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1570] = 2,
    ACTIONS(258), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(256), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1593] = 2,
    ACTIONS(262), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(260), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1616] = 2,
    ACTIONS(266), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(264), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1639] = 2,
    ACTIONS(270), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(268), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1662] = 2,
    ACTIONS(274), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(272), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1685] = 2,
    ACTIONS(278), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(276), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1708] = 2,
    ACTIONS(282), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(280), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1731] = 2,
    ACTIONS(286), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(284), 15,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1754] = 2,
    ACTIONS(290), 3,
      anon_sym_COMMA,
      sym_null_lit,
      aux_sym__sym_unqualified_token1,
    ACTIONS(288), 14,
      sym__ws,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_num_lit_token1,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_char_lit,
      sym_bool_lit,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
  [1776] = 2,
    ACTIONS(294), 2,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(292), 11,
      aux_sym_num_lit_token1,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_format_directive_type_token11,
  [1794] = 4,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(298), 2,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(300), 4,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(296), 6,
      aux_sym_num_lit_token1,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
      aux_sym_format_directive_type_token11,
  [1816] = 2,
    ACTIONS(306), 2,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(304), 11,
      aux_sym_num_lit_token1,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
      anon_sym_TILDE,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_format_directive_type_token11,
  [1834] = 7,
    ACTIONS(31), 1,
      aux_sym_num_lit_token1,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      aux_sym_format_directive_type_token11,
    ACTIONS(308), 2,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(312), 2,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
    STATE(48), 2,
      sym__format_token,
      aux_sym_format_modifiers_repeat1,
  [1859] = 6,
    ACTIONS(316), 1,
      aux_sym_num_lit_token1,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(319), 2,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(48), 2,
      sym__format_token,
      aux_sym_format_modifiers_repeat1,
    ACTIONS(327), 3,
      anon_sym_AT_COLON,
      anon_sym_COLON_AT,
      aux_sym_format_directive_type_token11,
  [1882] = 4,
    ACTIONS(329), 1,
      anon_sym_TILDE,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 2,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
    STATE(49), 2,
      sym_format_specifier,
      aux_sym_str_lit_repeat1,
  [1897] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_TILDE,
    ACTIONS(339), 2,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
    STATE(49), 2,
      sym_format_specifier,
      aux_sym_str_lit_repeat1,
  [1912] = 5,
    ACTIONS(31), 1,
      aux_sym_num_lit_token1,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      aux_sym_format_directive_type_token11,
    STATE(48), 2,
      sym__format_token,
      aux_sym_format_modifiers_repeat1,
  [1929] = 4,
    ACTIONS(341), 1,
      anon_sym_TILDE,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 2,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
    STATE(50), 2,
      sym_format_specifier,
      aux_sym_str_lit_repeat1,
  [1944] = 1,
    ACTIONS(347), 4,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
  [1951] = 1,
    ACTIONS(349), 4,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
  [1958] = 1,
    ACTIONS(351), 4,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
  [1965] = 1,
    ACTIONS(353), 4,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
  [1972] = 1,
    ACTIONS(355), 4,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
  [1979] = 1,
    ACTIONS(357), 4,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
  [1986] = 1,
    ACTIONS(359), 4,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_str_lit_token1,
      aux_sym_str_lit_token2,
  [1993] = 3,
    ACTIONS(361), 1,
      aux_sym_block_comment_content_token1,
    ACTIONS(364), 1,
      anon_sym_PIPE_POUND,
    STATE(60), 1,
      aux_sym_block_comment_content_repeat1,
  [2003] = 3,
    ACTIONS(366), 1,
      aux_sym_block_comment_content_token1,
    STATE(62), 1,
      aux_sym_block_comment_content_repeat1,
    STATE(64), 1,
      sym_block_comment_content,
  [2013] = 3,
    ACTIONS(368), 1,
      aux_sym_block_comment_content_token1,
    ACTIONS(370), 1,
      anon_sym_PIPE_POUND,
    STATE(60), 1,
      aux_sym_block_comment_content_repeat1,
  [2023] = 1,
    ACTIONS(372), 1,
      aux_sym__format_token_token1,
  [2027] = 1,
    ACTIONS(374), 1,
      anon_sym_PIPE_POUND,
  [2031] = 1,
    ACTIONS(376), 1,
      aux_sym__kwd_unqualified_token1,
  [2035] = 1,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 248,
  [SMALL_STATE(7)] = 319,
  [SMALL_STATE(8)] = 390,
  [SMALL_STATE(9)] = 461,
  [SMALL_STATE(10)] = 528,
  [SMALL_STATE(11)] = 595,
  [SMALL_STATE(12)] = 663,
  [SMALL_STATE(13)] = 731,
  [SMALL_STATE(14)] = 799,
  [SMALL_STATE(15)] = 867,
  [SMALL_STATE(16)] = 935,
  [SMALL_STATE(17)] = 1003,
  [SMALL_STATE(18)] = 1071,
  [SMALL_STATE(19)] = 1139,
  [SMALL_STATE(20)] = 1172,
  [SMALL_STATE(21)] = 1214,
  [SMALL_STATE(22)] = 1256,
  [SMALL_STATE(23)] = 1283,
  [SMALL_STATE(24)] = 1310,
  [SMALL_STATE(25)] = 1340,
  [SMALL_STATE(26)] = 1363,
  [SMALL_STATE(27)] = 1386,
  [SMALL_STATE(28)] = 1409,
  [SMALL_STATE(29)] = 1432,
  [SMALL_STATE(30)] = 1455,
  [SMALL_STATE(31)] = 1478,
  [SMALL_STATE(32)] = 1501,
  [SMALL_STATE(33)] = 1524,
  [SMALL_STATE(34)] = 1547,
  [SMALL_STATE(35)] = 1570,
  [SMALL_STATE(36)] = 1593,
  [SMALL_STATE(37)] = 1616,
  [SMALL_STATE(38)] = 1639,
  [SMALL_STATE(39)] = 1662,
  [SMALL_STATE(40)] = 1685,
  [SMALL_STATE(41)] = 1708,
  [SMALL_STATE(42)] = 1731,
  [SMALL_STATE(43)] = 1754,
  [SMALL_STATE(44)] = 1776,
  [SMALL_STATE(45)] = 1794,
  [SMALL_STATE(46)] = 1816,
  [SMALL_STATE(47)] = 1834,
  [SMALL_STATE(48)] = 1859,
  [SMALL_STATE(49)] = 1882,
  [SMALL_STATE(50)] = 1897,
  [SMALL_STATE(51)] = 1912,
  [SMALL_STATE(52)] = 1929,
  [SMALL_STATE(53)] = 1944,
  [SMALL_STATE(54)] = 1951,
  [SMALL_STATE(55)] = 1958,
  [SMALL_STATE(56)] = 1965,
  [SMALL_STATE(57)] = 1972,
  [SMALL_STATE(58)] = 1979,
  [SMALL_STATE(59)] = 1986,
  [SMALL_STATE(60)] = 1993,
  [SMALL_STATE(61)] = 2003,
  [SMALL_STATE(62)] = 2013,
  [SMALL_STATE(63)] = 2023,
  [SMALL_STATE(64)] = 2027,
  [SMALL_STATE(65)] = 2031,
  [SMALL_STATE(66)] = 2035,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(61),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(30),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(65),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(12),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(18),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(52),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(43),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(43),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(41),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(41),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(16),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 10), SHIFT_REPEAT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(61),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(30),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(65),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(41),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(41),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_prefix_parameters, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_prefix_parameters, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_modifiers, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_modifiers, 1),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoting_lit_repeat1, 2), SHIFT_REPEAT(24),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoting_lit_repeat1, 2), SHIFT_REPEAT(61),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoting_lit_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoting_lit_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_lit, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_lit, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoting_lit, 3, .production_id = 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoting_lit, 3, .production_id = 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quoting_lit, 2, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasi_quoting_lit, 2, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list_lit, 3, .production_id = 9),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list_lit, 3, .production_id = 9),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing_lit, 2, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing_lit, 2, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num_lit, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num_lit, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwd_lit, 2, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kwd_lit, 2, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quoting_lit, 3, .production_id = 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasi_quoting_lit, 3, .production_id = 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoting_lit, 3, .production_id = 7),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoting_lit, 3, .production_id = 7),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoting_lit, 2, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoting_lit, 2, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list_lit, 2, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list_lit, 2, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_lit, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_lit, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoting_lit, 2, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoting_lit, 2, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing_lit, 3, .production_id = 7),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing_lit, 3, .production_id = 7),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_lit, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_lit, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sym_lit, 1, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sym_lit, 1, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 1, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 1, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 1, .production_id = 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 1, .production_id = 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format_token, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format_token, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_format_modifiers_repeat1, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_format_modifiers_repeat1, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format_token, 1, .production_id = 8),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format_token, 1, .production_id = 8),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_format_modifiers_repeat1, 2), SHIFT_REPEAT(46),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_format_modifiers_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_format_modifiers_repeat1, 2), SHIFT_REPEAT(63),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_format_modifiers_repeat1, 2), SHIFT_REPEAT(48),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_format_modifiers_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_lit_repeat1, 2), SHIFT_REPEAT(4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_lit_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_lit_repeat1, 2), SHIFT_REPEAT(49),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive_type, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_specifier, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive_type, 2, .production_id = 11),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive_type, 2, .production_id = 12),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_specifier, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive_type, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_specifier, 4),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_content_repeat1, 2), SHIFT_REPEAT(60),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_content_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment_content, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [378] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
