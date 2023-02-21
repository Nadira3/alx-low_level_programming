#include <stdio.h>
/**
 * main - prints sum of even numbers in the fib series
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long sumeven;
	unsigned long T[50];
	T[0] = 1;
	T[1] = 2;
	sumeven= T[1];

	for (i = 2; T[i] < 4000000; i++)
	{
		T[i] = T[i - 2] + T[i - 1];
		if (T[i] % 2 == 0)
		{
			sumeven += T[i];
		}
	}
	printf("%lu\n", sumeven);
	return (0);
}
