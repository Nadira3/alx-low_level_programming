#include "main.h"
/**
 * main - prints all the alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
