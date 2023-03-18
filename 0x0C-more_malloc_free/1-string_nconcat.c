#include "main.h"
/**
 * _string_nconcat - concatenates n bytes of source string
 * to destination string
 * @s1: destination
 * @s2: source
 * @n: number of bytes
 * Return: pointer to destination string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, m = 0;
	char *ptr;

	for (i = 0; s1[i]; ++i)
		;
	for (j = 0; j < n && s2[j]; ++j)
		;
	ptr = malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i + j; k++)
	{
		if (k >= i)
		{
			ptr[k] = s2[m];
			m++;
			continue;
		}	
		ptr[k] = s1[k];
	}
	ptr[k] = '\0';
	return (ptr);
}
