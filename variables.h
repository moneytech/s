extern char variable_name[TOK_MAX];

char *read_variable_prefix(char *tok);
int variable_character(char c);
char *expand_variables(char *tok, int t);
