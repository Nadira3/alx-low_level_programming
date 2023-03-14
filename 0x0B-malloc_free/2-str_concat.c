#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to string one
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, total_len;
	char *s3;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = len2 = 0;
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;
	total_len = len1 + len2 + 1;
	s3 = malloc(sizeof(char) * total_len);
	if (s3 == NULL)
		return (NULL);
	ptr = s2;
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < (len2 + 1); i++, j++)
		s3[i] = s2[j];
	return (s3);
}
