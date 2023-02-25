#include <stdio.h>
#include <math.h>
int isPrime(long n);

/**
 * main - finds the largest prime factor of a number
 * Return: 0
 */
int main(void)
{
	long x, i, n = 612852475143;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0 && isPrime(i))
		{
			n /= i;
			x = i;
		}
	}
	printf("%ld\n", x);
	return (0);
}
/**
 * isPrime - checks if a factor is a prime number
 * @n: number argument
 * Return: 0 or 1
 */
int isPrime(long n)
{
	long i, count = 0;

	for (i = 1; i <= n; i++)
	{
		if (count > 2)
		{
			break;
		}
		if (n % i == 0)
		{
			++count;
		}
	}
	if (count == 2)
		return (1);
	else
		return (0);
}
