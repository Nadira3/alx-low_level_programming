#include "main.h"
/**
 * primecheck - checks if a number is a prime or not)
 * @n: number
 * @i: divisor
 * Return: 0 || 1
 */
int primecheck(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (primecheck(n, i + 1));
}
/**
 * is_prime_number - returns an indicator for the prime status
 * of a number
 * @n: number
 * Return: 0 || 1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (primecheck(n, i));
}
