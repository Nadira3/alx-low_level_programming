#include "function_pointers.h"
/**
 * int_index - finds the index of an integer in an array
 * @array: array
 * @size: size of array
 * @cmp: function to compare elements of an array
 * Return: array index in int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (*cmp && array != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
