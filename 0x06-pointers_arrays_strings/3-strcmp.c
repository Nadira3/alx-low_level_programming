#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: diffrrence between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, diff = 0;

	for (i = 0, j = 0; s1[i] && s2[j]; i++, j++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[j];
			return diff;
		}
	}
	return (diff);
}
