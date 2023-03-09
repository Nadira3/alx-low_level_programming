#include "main.h"
/**
 * factorial - prints a string, followed by a new line
 * @n: number
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
