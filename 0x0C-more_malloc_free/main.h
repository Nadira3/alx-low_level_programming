#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void dup(char *s, char *t);
void dupn(char *s, char *t, int size);
void zero_init(char *ptr, int size);
#endif
