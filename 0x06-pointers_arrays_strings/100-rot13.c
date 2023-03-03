#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: pointer to string
 */
char *rot13(char *str)
{
	int i;
	/*char cap[26], small[26];

	for (i = 0; i < 26; i++)
	{
		cap[i] = cap;
		cap++;
		small[i] = small;
		small++;
	}*/
	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 64 && str[i] < 78) || (str[i] > 96 && str[i] < 110))
			str[i] += 13;
		else if ((str[i] > 77 && str[i] < 91) || (str[i] > 109 && str[i] < 123))
			str[i] -= 13;
	}
	return (str);
}
