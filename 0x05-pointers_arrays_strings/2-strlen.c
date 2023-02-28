#include "main.h"
/**
 * _strlen - finds the length of a string
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;
	return (len);
}
