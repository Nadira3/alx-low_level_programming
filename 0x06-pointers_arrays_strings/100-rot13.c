#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: pointer to string
 */
char *rot13(char *str)
{
	int i, j;
	char a[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (str[i] == a[j] && j < 26)
				str[i] += str[i + 26];
			else
				str[i] -= 13;
		}
	}
	return (str);
}
