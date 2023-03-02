#include "main.h"
/**
 * _strncpy - copies n bytes of a string to another
 * to destination string
 * @dest: destination
 * @source: source
 * @n: number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
