#include "main.h"
/**
 * _strncat - concatenates n bytes of source string
 * to destination string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to destination string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	unsigned int i, j;

	for (i = 0; s1[i]; ++i)
		;

	for (j = 0; j < n && s2[j]; j++)
	{
		s1[i] = s2[j];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
