#include <stdio.h>
#include <stdlib.h>

int len(unsigned long int n, int count, int *nlen)
{
	if (!n)
	{
		*nlen = count;
		return count;
	}
	return len(n / 10, count + 1, nlen);
}

char *itoa(unsigned long int n)
{
	char *numstr = NULL;
	int i = 0, j = 0;

	len(n, 0, &j);
	numstr = malloc(j + 1);
	if (!numstr)
		return (0);

	while (n)
	{
		numstr[i] = n % 10 + '0'; // Convert numerical digit to ASCII character
		n /= 10;
		i++;
	}
	numstr[i] = '\0';

	return numstr;
}

int is_palindrome(unsigned long int product)
{
	int i, j;
	char *pstr = itoa(product);

	if (atoi(pstr) != product)
	{
		free(pstr);
		return 0;
	}

	free(pstr);
	return 1;
}

int main(void)
{
	int first = 100, second = 100;
	unsigned long product, max = 101;

	while (first < 1000)
	{
		second = 100;
		while (second < 1000)
		{
			product = first * second;
			if (is_palindrome(product) && product > max)
				max = product;
			second++;
		}
		first++;
	}

	printf("%lu\n", max);
	return 0;
}

