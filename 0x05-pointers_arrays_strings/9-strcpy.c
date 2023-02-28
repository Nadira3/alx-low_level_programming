#include "main.h"
/**
 * rev_string - reverses a string and prints
 */
char *_strcpy(char *dest, char *src)
{
	int i; /*len_src = 0,len_dest = 0;*/

	/**for (i = 0; src[i]; i++)
		len_src++;
	for (i = 0; dest[i]; i++)
		len_dest++;*/
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
