#include "variadic_functions.h"
/**
 * printint - prints an integer
 * @pam: variable list
 */
void printint(va_list pam)
{
	printf("%d", va_arg(pam, int));
}
/**
 * printfloat - prints a float
 * @pam: variable list
 */
void printfloat(va_list pam)
{
	printf("%f", va_arg(pam, double));
}
/**
 * printstring - prints a string
 * @pam: variable list
 */
void printstring(va_list pam)
{
	printf("%s", va_arg(pam, char*));
}
/**
 * get_format - finds the format specifier of a variable
 * @s: pointer to variable
 * Return: void function pointer
 */
void (*get_format(const char * const s))(va_list pam)
{
	unsigned int i = 0;

form_t forms[] = {
	{"c", printint},
	{"i", printint},
	{"f", printfloat},
	{"s", printstring},
	{NULL, NULL}
};
	while (*(forms[i].f))
	{
		if (*(forms[i].format) == *s)
			return (forms[i].f);
		i++;
	}
	return (forms[i].f);
}
/**
 * print_all - prints any type of argument
 * @format: argumrnt format
 */
void print_all(const char * const format, ...)
{
	va_list pam;
	unsigned int i = 0, n;
	void (*fptr)(va_list pam);

	va_start(pam, format);
	n = strlen(format);
	while (format[i] && format)
	{
		fptr = get_format(&format[i]);
		if (fptr)
			fptr(pam);
		printf("%s", (i < n - 1) && fptr ? ", " : "");
		i++;
	}
	printf("\n");
	va_end(pam);
}
