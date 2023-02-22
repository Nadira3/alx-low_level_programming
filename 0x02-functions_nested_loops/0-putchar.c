#include "main.h"
/**
 * main - prints a string 
 * Return: 0
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i]; i++)
		_putchar(ch[i]);
	_putchar(10);
	return (0);
}
