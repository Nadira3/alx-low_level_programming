#include "main.h"
/**
 * _memcpy - a function that copies n bytes from src to dest
 * @src: source
 * @dest: destination
 * @n: size of byte to be filled
 * Return: character pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		++src;
		++dest;
	}
	return (dest);
}
