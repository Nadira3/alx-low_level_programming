#include "main.h"
/**
 * _pow - finds the power of a number
 * @x: number
 * @y: power
 * Return: int
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
/**
 * _strlen - finds the length of a number string
 * @b: string
 * Return: lenght of the string
 */
int _strlen(char *b)
{
	if (!*b)
		return (0);
	return (1 + _strlen(b + 1));
}
/**
 * binary_to_uint - converts binary to integer
 * @b: pointer to string of numbers
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int num_length, i = 0, power, num;
	unsigned int bin = 0;

	if (!b)
		return (0);
	num_length = _strlen((char *)b);
	power = num_length - 1;
	while (i < num_length)
	{
		num = b[i] - 48;
		if (num > 0 && num != 1)
			return (0);
		bin += (_pow(2, power--)) * num;
		i++;
	}
	return (bin);
}
