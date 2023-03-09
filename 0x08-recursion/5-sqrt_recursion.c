#include "main.h"
/**
 * _sqrt_recursion - find the square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (n);
	return (n / _sqrt_recursion(n / 2));
}
