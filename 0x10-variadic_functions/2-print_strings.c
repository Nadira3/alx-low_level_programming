#include "variadic_functions.h"
/**
 * print_strings - prints string arguments
 * @separator: number separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	char *str;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(params, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(params);
}
