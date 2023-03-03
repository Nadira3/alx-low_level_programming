#include "main.h"
/**
 * cap_string - capitalizes every word in a string
 * @str: string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i, j;
	int separator[] = {9, 10, 32, 44, 59, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 46)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
				continue;
			}
			continue;
		}
		for (j = 0; j < 12; j++)
		{
			if (str[i] == separator[j] && str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
				break;
			}
		}
	}
	return (str);
}
