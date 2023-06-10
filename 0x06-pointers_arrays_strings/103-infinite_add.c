#include "main.h"
#define SIZE 10
/**
 * infinite_add - adds an infinite number of digits
 * @n1: array containing first number
 * @n2: array containing second number
 * @r: array to store result
 * @size_r: size of r
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, i, j, rem = 0, k = size_r - 2, num;
	char str[2], mtr[2], c;
	char *num1 = n1, *num2 = n2, *s = str, *t = mtr;

	if (!n1 || !n2 || !r)
		return (0);
	len1 = strlen(n1);
	len2 = strlen(n2);
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);
	r[size_r - 1] = '\0';
	i = --len1;
	j = --len2;
	while (k >= 0)
	{
		s[0] = i >= 0 ? num1[i] : '0';
		s[1] = '\0';
		t[0] = j >= 0 ? num2[j] : '0';
		t[1] = '\0';
		num = atoi(s) + atoi(t) + rem;
		rem = num / 10;
		c = (num % SIZE) + '0';
		if (!i && !j)
		{
			r[k--] = c;
			if (rem)
				r[k] = rem + '0';
			return (&(r[k]));
		}
		r[k--] = c;
		i--;
		j--;
		if (rem && k < 0)
			return (0);
	}
	return (r);
}
