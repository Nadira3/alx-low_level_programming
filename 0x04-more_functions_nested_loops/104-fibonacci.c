#include <stdio.h>
#include <math.h>
#define DIV 10000000000
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
		if (i < 92)
		{
			printf("%lu, ", T[i]);
		}
		else if (i >= 92 && i < 97)
		{
			unsigned long x, y;

			x = (T[i - 2] / DIV) + (T[i - 1] / DIV) + (((T[i - 2] % DIV) + (T[i - 1] % DIV)) / DIV);
			y = (((T[i - 2] % DIV) + (T[i - 1] % DIV)) % DIV);
		 	printf("%lu%lu, ", x, y);
		}
		else
		{
			unsigned long x, y;
			x = (T[i - 2] / DIV) + (T[i - 1] / DIV) + (((T[i - 2] % DIV) + (T[i - 1] % DIV)) / DIV);
			y = (((T[i - 2] % DIV) + (T[i - 1] % DIV)) % DIV);
			printf("%lu%lu", x, y);
		}
	}
	return (0);
}
