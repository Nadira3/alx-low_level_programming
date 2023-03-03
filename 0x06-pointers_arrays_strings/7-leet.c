#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: pointer to string
 */
char *leet(char *str)
{
	int i, j;
	char leetchar[] = "AaEeOoTtLl";
	char leetvalue[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leetchar[j]; j++)
		{
			if (str[i] == leetchar[j])
				str[i] = leetvalue[j];
		}
	}
	return (str);
}
