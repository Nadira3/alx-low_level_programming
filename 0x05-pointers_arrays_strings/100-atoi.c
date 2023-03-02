#include <stdio.h>
#include <string.h>
/**
 * _atoi - finds the length of a string
 * @s: pointer to string
 * Return: length of the string
 */
int _atoi(char *s)
{
	int i, j, k = 0;
	unsigned int num = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((s[i] - '0') >= 48 && (s[i] - '0' <= 58)
			{
				num = num * 10 + (s[i] - '0');
				k++;
			}
			if (j > 8 && k > 0 && (!(s[i + 1] >= 48 && s[i + 1] <= 58)))
				return (num);
		}
	}
	if (k > 0)
		return (num);
	else
		return (k);

}
