#include "main.h"
#include <stdlib.h>
/**
 * _strlen - finds the lenght of a string
 * @s: string
 * Return: string lenght.
 */
int numWord(char *str)
{
	int num = 0;

	while (*str == ' ')
		str++;
	while (*str)
	{
		if (*str == ' ' && *(str + 1) != ' ')
			num++;
		str++;
	}
	return (num);
}
/**
 * findWords - find words separated by a space in a string
 * @str: string
 * Return: pointer to strings
 */
int findWords(char *str)
{
	int str_len = 0; 

	while (*str == ' ')
		str++;
	while (*str)
	{
		if (*str == ' ')
		{
			break;
		}
		str_len++;
		str++;
	}
	return (str_len);
}
/**
 * strtow - splits a string
 * @str: string
 * Return: pointer to a pointer of characters
 */
char **strtow(char *str)
{
	char **ptr;
	int i, j = 0, wordnum = numWord(str);

	if (str == NULL || *str == '\0')
		return (NULL);
	ptr = malloc(sizeof(char *) * (wordnum + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < wordnum; i++)
	{
		ptr[i] = malloc(sizeof(char) * (findWords(str) + 1));
		str = str + findWords(str);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < wordnum; i++)
	{
		if (str[i] == ' ')
		{
			j++;
			continue;
		}
		for (; j < findWords(str); j++)
		{
			ptr[i][j] = str[j];
			str = str + findWords(str);
		}
		ptr[i][j] = '\n';
		ptr[i][j + 1] = '\0';
		j = j + 2;
	}
	ptr[i] = NULL;
	return (ptr);
}
