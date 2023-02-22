#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long T[98];

	T[0] = 1;
	T[1] = 2;

	printf("%lu, %lu, ", T[0], T[1]);
	for (i = 2; i < 98; i++)
	{
		T[i] = T[i - 2] + T[i - 1];
		/* if (i < 97)
			printf("%lu, ", T[i]);
		else */
			printf("%lu", T[3]);
	}
	printf("\n");
	return (0);
}
