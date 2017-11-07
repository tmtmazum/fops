#pragma once

typedef void(*fops_consumer_t)(char const*);

typedef struct fops_options
{
  char const* cache;
  char const* output;
  char const* regex;
  int opts;
} fops_options_t;

void fops_enum(char const* root_in, fops_options* options, fops_consumer_t consumer);
void fops_index(char const* root_in, fops_options* options, fops_consumer_t consumer);
