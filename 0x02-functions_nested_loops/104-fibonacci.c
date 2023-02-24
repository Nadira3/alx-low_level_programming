#include <stdio.h>
#include <math.h>
#define div 10000000000
/**
 * main - prints fibonacci numbers
 */
int main(void)
{
	int i;
	unsigned long a, b, c, d, nexta, nextb;
	unsigned long T[98];

	T[0] = 1;
	T[1] = 2;

	printf("%lu, %lu, ", T[0], T[1]);
	for (i = 2; i < 98; i++)
	{
		if (i < 92)
		{
			T[i] = T[i - 2] + T[i - 1];
			printf("%lu, ", T[i]);
			if (i == 90)
			{
				a = T[i] / div;
				b = T[i] % div;
			}
			if (i == 91)
			{
				c = T[i] / div;
				d = T[i] % div;
			}
		}
		if (i > 91)
		{
			nextb = (b + d) % div;
			nexta = a + c + ((b + d) / div);
			printf("%lu%lu", nexta, nextb);
			if (i != 97)
				printf(", ");
			a = c;
			b = d;
			c = nexta;
			d = nextb;
		}
	}
	printf("\n");
	return (0);
}
