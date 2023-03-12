#include "main.h"
/**
 * checker - checks if a number is a prime number
 * @n: number
 * Return: int
 */
int checker(int n)
{
	if (n <= 1)
		return (0);
	return (n % checker(n - 1));
}
/**
 * is_prime_number - returns a value for prime number check
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	int i = checker(n);

	if (i)
		return (1);
	return (i);
}
