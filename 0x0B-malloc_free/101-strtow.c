#include "main.h"
/**
 * _strlen - finds the lenght of a string
 * @s: string
 * Return: string lenght.
 */
int _strlen(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * strtow - splits a string
 * @str: string
 * Return: pointer to a pointer of characters
 */
char **strtow(char *str)
{
	char **ptr;
	int i;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	ptr = malloc(sizeof(char) * _strlen(str));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str); i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			**ptr = '\n';
		else if (str[i] == ' ' && str[i + 1] == ' ')
		{
			continue;
		}
		else
			**ptr = str[i];
	}
	return (ptr);
}
