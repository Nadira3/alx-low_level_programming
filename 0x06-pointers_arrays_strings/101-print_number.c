#include <stdio.h>
#include <math.h>
void print_number(int n)
{
	int i, j;
	int num[80];

	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	if (n == 0)
		putchar(48);
	for (i = 0; n / 10; i++)
	{
		num[i] = n % 10;
		n /= 10;
		if (n < 10)
			putchar(n + '0');
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(num[j] + '0');
	}
}
int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}
