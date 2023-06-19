#include "main.h"
/**
 * _strcpy - copies a string from source to destination
 * @src: source string pointer
 * @dest: destination buffer
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i; /*len_src = 0,len_dest = 0;*/

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
