#include <stdio.h>
#include <string.h>
/**
 * _atoi - changes strings to to integers
 * @s: string pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int i, minus = 0;
	int n = strlen(s);
	unsigned int num = 0;

	for (i = 0; i < n; i++)
	{
		if (s[i] == 45)
			minus++;
		if (s[i] >= 48 && s[i] < 58)
		{
			num = num * 10 + (s[i] - 48);
			if (!(s[i + 1] >= 48 && s[i + 1] < 58))
				break;
		}
	}
	if (!(minus % 2))
		return (num);
	else
		return (-num);
}
