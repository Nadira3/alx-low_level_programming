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
	int i, j, k;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i]; i++)
	{
		if (!(needle[0]))
			break;
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[0])
			{
				for (k = 1; needle[k]; k++)
				{
					if (haystack[i + k] != needle[k])
						break;
					return (haystack + i);

				}
			}
		}
	}
	return (NULL);
}
