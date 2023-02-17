#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 99)
	{
		int a = x / 10;
		int b = x % 10;

		if (a != b && b > a)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (x < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
