#include "main.h"
#include <stdlib.h>
/**
 * numWord - finds the number of words in a string
 * @str: string
 * Return: number of words
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
 * findWords - find the number of characters in a word in a string
 * @str: string
 * Return: number of characters
 */
int findWords(char *str)
{
	int str_len = 0;

	while (*str == ' ')
		str++;
	while (*str)
	{
		str_len++;
		if (*str == ' ')
			break;
		str++;
	}
	return (str_len);
}
/**
 * rstrchr - changes pointer to string to new position of a word
 * @s: string
 * @c: character
 * @wordnum: word position
 * Return: pointer to character
 */
char *rstrchr(char *s, char c, int wordnum)
{
	int count = 0;

	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			count++;
		if (count == wordnum)
			return (s + 1);
		s++;
	}
	return (NULL);
}
/**
 * strtow - splits a string
 * @str: string
 * Return: pointer to a pointer of characters
 */
char **strtow(char *str)
{
	char **ptr;
	char *string = str;
	int i, j, k, wordnum = numWord(str);

	if (str == NULL || *str == '\0')
		return (NULL);
	ptr = malloc(sizeof(char *) * (wordnum + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < wordnum; i++)
	{
		string = rstrchr(string, ' ', i + 1);
		ptr[i] = malloc(sizeof(char) * findWords(string));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		k = findWords(string);
		for (j = 0; j < k; j++, string++)
			ptr[i][j] = *string;
		ptr[i][j] = '\0';
		string = str;
	}
	ptr[i] = NULL;
	return (ptr);
}
