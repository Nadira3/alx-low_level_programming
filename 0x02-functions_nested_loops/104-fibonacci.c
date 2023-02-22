#include <stdio.h>
#include <math.h>
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

	printf("%lu, %.lu, ", T[0], T[1]);
	for (i = 2; i < 98; i++)
	{
		if (i < 90)
		{
			T[i] = T[i - 2] + T[i - 1];
			printf("%lu, ", T[i]);
		}
		else
		{
			unsigned long x, y;

			x = (T[i - 2] + T[i - 1]) / 1000000;
			y = (T[i - 2] + T[i - 1]) % 1000000;

			if (T[i] < 97)
				T[i] = printf("%lu%lu, ", x, y);
			else
				T[i] = printf("%lu%lu", x, y);
		}
	}
	printf("\n");
	return (0);
}
