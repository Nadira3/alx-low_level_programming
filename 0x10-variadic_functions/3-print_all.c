#include "variadic_functions.h"
/**
 * print_char - prints a character
 * @pam: va_list containing the character to print
 */
void print_char(va_list pam)
{
	printf("%c", va_arg(pam, int));
}
/**
 * print_int - prints an integer
 * @pam: va_list containing the integer to print
 */
void print_int(va_list pam)
{
	printf("%d", va_arg(pam, int));
}
/**
 * print_float - prints a float
 * @pam: va_list containing the float to print
 */
void print_float(va_list pam)
{
	printf("%f", va_arg(pam, double));
}
/**
 * print_string - prints a string
 * @pam: va_list containing the string to print
 */
void print_string(va_list pam)
{
	char *ptr = va_arg(pam, char *);

	printf("%s", ptr ? ptr : "(nil)");
}
/**
 * print_all - prints a variable number of arguments of different types
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list pam;
	int i = 0, j;
	void (*print_func)(va_list);

	form_t forms[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(pam, format);

	while (format && format[i])
	{
		j = 0;
		while (forms[j].format)
		{
			if (*(forms[j].format) == format[i])
			{
				print_func = forms[j].f;
				print_func(pam);
				printf("%s", format[i + 1] ? ", " : "");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(pam);
}

