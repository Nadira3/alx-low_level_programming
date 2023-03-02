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
	int collate[80];
	int INT[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	unsigned int num = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((s[i] - '0') == INT[j])
			{
				collate[k] = INT[j];
				num = num * 10 + collate[k];
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
