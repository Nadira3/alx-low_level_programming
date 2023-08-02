#include <stdio.h>
#include <stdlib.h>

int is_palindrome(unsigned long int n) {
    unsigned long int original = n;
    unsigned long int reverse = 0;

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return (original == reverse);
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
	return (0);
}
