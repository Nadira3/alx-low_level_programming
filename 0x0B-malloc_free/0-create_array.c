#include "main.h"
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: character
 * Return: character pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	int *ptr = (int *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
