#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the 
 * character c in the string s, or NULL if the character is not found
 * @s: string
 * @c: character
 * Return: character pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for(i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
		return (NULL);
}
