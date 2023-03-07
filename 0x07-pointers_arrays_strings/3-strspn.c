#include "main.h"
#include <ctype.h>
/**
 * _strspn - Returns the number of bytes in the initial segment of s 
 * which consist only of bytes from accept
 * @s: string
 * @accept: substring
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i]; i++)
	{
		if(!(isalpha(s[i])))
			break;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
	}
	return (n);
}
