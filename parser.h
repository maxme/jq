#ifndef PARSER_H
#define PARSER_H

int jq_parse(struct locfile* source, block* answer);
int jq_parse_library(struct locfile* locations, block* answer);

#endif
