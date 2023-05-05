#include "main.h"
/**
 * get_bit - gets bit value at index
 * @index: position of bit value
 * @n: number
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	if (index < 0)
		return (-1);

	while (n > 0)
	{
		n /= 2;
		i++;
		if (i == index)
			return (n % 2);
	}
	return (0);
}
