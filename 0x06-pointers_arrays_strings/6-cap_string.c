#include "main.h"
/**
 * cap_string - capitalizes every word in a string
 * @str: string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i, j;
	int separator[] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == separator[j])
				str[i + 1] -= 32;
		}
	}
	return (str);
}
