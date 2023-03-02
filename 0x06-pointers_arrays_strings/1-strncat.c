#include "main.h"
/**
 * _strncat - concatenates n bytes of source string
 * to destination string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; ++i)
		;

	for (j = 0; j < n && src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
