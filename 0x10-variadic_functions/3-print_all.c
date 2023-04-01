#include "variadic_functions.h"
#include <string.h>
typedef struct op
{
    char *format;
    void (*f)(va_list pam);
} form_t;
/**
 * print_strings - prints string arguments
 * @separator: number separator
 * @n: number of arguments
 */
void printchar(va_list pam)
{
	printf("%c", va_arg(pam, int));
}
void printint(va_list pam)
{
	printf("%d", va_arg(pam, int));
}
void printfloat(va_list pam)
{
	printf("%f", va_arg(pam, double));
}
void printstring(va_list pam)
{
	printf("%s", va_arg(pam, char*));
}
form_t forms[] = {
        {"c", printchar},
        {"i", printint},
        {"f", printfloat},
        {"s", printstring},
        {NULL, NULL}
    };
void (*get_format(const char * const s))(va_list pam)
{
	unsigned int i = 0;

	while (*(forms[i].f))
	{
		if (*(forms[i].format) == *s)
			return (forms[i].f);
		i++;
	}
	return (forms[i].f);
}
void print_all(const char * const format, ...)
{
	va_list pam;
	unsigned int i = 0;
	void (*fptr)(va_list pam);

	va_start(pam, format);
	while (format[i])
	{
		fptr = get_format(&format[i]);
		if (fptr && i < (strlen(format) - 1))
		{
			fptr(pam);
			printf(", ");
		}
		if (fptr && i == (strlen(format) - 1))
		{
			fptr(pam);
			printf("\n");
		}
		i++;
	}
	va_end(pam);
}
