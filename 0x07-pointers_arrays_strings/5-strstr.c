#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string
 * @needle: string argument
 * Return: character pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len = 0;

	for (i = 0; needle[i]; i++)
		len++;
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (haystack[i + (len - 1)] == needle[len])
					return (haystack + i - 1);
			}
		}
	}
	return (NULL);
}
