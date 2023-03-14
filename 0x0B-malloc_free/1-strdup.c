#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory
 * @str: string
 * Return: character pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *str1;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	str1 = malloc(sizeof(char) * (i + 1));
	if (str1 == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		str1[j] = str[j];
	return (str1);
}
