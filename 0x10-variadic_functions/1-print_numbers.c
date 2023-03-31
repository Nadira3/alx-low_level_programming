#include "variadic_functions.h"
/**
 * print_numbers - prints number arguments
 * @separator: number separator
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	const char *ptr = separator;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (i < (n - 1) && ptr)
		{
			while (*ptr)
				printf("%c", *ptr++);
			ptr = separator;
		}
	}
	printf("\n");
	va_end(params);
}
