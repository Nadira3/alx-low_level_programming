#include "main.h"
/**
 * string_nconcat - concatenates n bytes of source string
 * to destination string
 * @s1: destination
 * @s2: source
 * @n: number of bytes
 * Return: pointer to destination string
 */
/*char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, m = 0;
	char *ptr;

	for (i = 0; s1[i]; ++i)
		;
	for (j = 0; j < n && s2[j]; ++j)
		;
	if (s2 == NULL)
		j = 0;
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
}*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, total_len;
	char *s3;

	len1 = len2 = 0;
	for (i = 0; s1 != NULL && s1[i]; i++)
		len1++;
	for (i = 0; s2 != NULL && s2[i]; i++)
		len2++;
	total_len = len1 + len2 + 1;
	s3 = malloc(sizeof(char) * total_len);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1 && s1[i]; i++)
		s3[i] = s1[i];
	if (s1 == NULL)
		i = 0;
	for (j = 0; j < n && s2[j]; i++, j++)
	{
		s3[i] = s2[j];
	}
	return (s3);
}
