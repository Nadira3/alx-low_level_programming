#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the arguments of a function
 * @n: number of arguments
 * Return: sumnof arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start (params, n);
	for (i = 0; i < n; i++)
		sum += va_arg(params, int);
	va_end (params);
	return (sum);
}
