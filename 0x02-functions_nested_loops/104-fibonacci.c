#include <stdio.h>
/**
 * main - prints 98 fibonacci numbers
 */
int main(void)
{
	int i;
	long double T[98];
	T[0] = 1.00000000;
	T[1] = 2.00000000;

	printf("%.0Lf, %.0Lf, ", T[0], T[1]);
	for (i = 2; i < 98; i++)
	{
		T[i] = T[i - 2] + T[i - 1];
		if (i < 97)
			printf("%.0Lf, ", T[i]);
		else
			printf("%.0Lf", T[i]);
	}
	printf("\n");
	return (0);
}
