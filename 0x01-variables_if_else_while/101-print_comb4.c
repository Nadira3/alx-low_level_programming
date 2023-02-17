#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 1000)
	{
		int c = x % 10; /* stores the last digit */
		int d = x / 10; /* stores the quotient */
		int b = d % 10; /* stores middle digit */
		int a = d / 10; /* stores the firat digit */

		if (a != b && b != c && a != c)
		{
			if (a < b && b < c)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (x < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
