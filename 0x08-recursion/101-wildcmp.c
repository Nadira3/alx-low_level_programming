#include <stdio.h>
/**
 * wild - moves the pointer to the character following a wild character
 * @s: string
 * Return: character pointer
 */
char *wild(char *s)
{
	if (*s != '*') /* checks if the character is a wild xter */
	{
		return (s); /* returns the next character pointer if not */
	}
	s++; /* increments the pointer if d pointer has a wild xter value */
	return (wild(s));
	/* recursively increments the string pointer if it points to a '*' */
}
/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (!*s) /* return 0 if s points to null */
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
/* increments the length by once with every true evaluation of s */
}
/**
 * wildcmp - checks if two strings match
 * @s1: first string
 * @s2: second string
 * Return: 1 if strings match , 0 if atrings do not match
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && _strlen(s2) == 1) /* checks if s2 == "*" */
		return (1);
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
	/* checks if s2 is * in the middle or start of a string */
	{
		if (*s1 == *s2 || *s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			{
				return (1);
			}
		}
	}
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
/* checks both characters in s1 and s2 one at a time to find a match */
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
