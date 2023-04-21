#ifndef VF_H
#define VF_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * struct op - has two elements
 * @format: op format
 * @f: function pointer
 */
typedef struct op
{
	char *format;
	void (*f)(va_list pam);
} form_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
