#include "main.h"
/**
 * string_toupper - changes all the characters in a string to uppercase
 * @str: string pointer
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
