#include <ctype.h>
/**
 * rot13 - rotates alphabets 13 places
 * @s: string
 * Return: charcater pointer
 */
char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 1; ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123)) && j; j++)
		{
			if (s[i] < 78 || (s[i] < 110 && s[i] > 96))
			{
				s[i] += 13;
				break;
			}
			s[i] -= 13;
			break;
		}
	}
	return (s);
}
