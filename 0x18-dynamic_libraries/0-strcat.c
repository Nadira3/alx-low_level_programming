#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: destination
 * @src: source
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
