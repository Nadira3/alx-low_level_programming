#include "main.h"
/**
 * main - prints all the alphabets in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;
		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar(10);
		i++;
	}
}
