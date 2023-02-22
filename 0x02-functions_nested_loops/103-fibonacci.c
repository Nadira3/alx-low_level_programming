#include <stdio.h>
/**
 * main - prints first fifty fib numbers
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long sum = 2;
	unsigned long T[50];
	T[0] = 1;
	T[1] = 2;

	for (i = 2; i < 50; i++)
	{
		T[i] = T[i - 2] + T[i - 1];
		if (T[i] < 4000000 && T[i] % 2 == 0)
		{
			sum += T[i];
		}
	}
	printf("%lu\n", sum);
	return (0);
}
