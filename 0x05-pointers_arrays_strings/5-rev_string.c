#include "main.h"
/**
 * rev_string - reverses a string and prints
 * @s: string
 */
void rev_string(char *s)
{
	int i, len = 0;
	char *ptra, *ptrb, ch;

	for (i = 0; s[i]; i++)
		len++;
	ptra = s;
	ptrb = s + len - 1;
	for (i = 0; i <= (len - 1) / 2; i++)
	{
		ch = *ptra;
		*ptra = *ptrb;
		*ptrb = ch;
		ptra++;
		ptrb--;
	}
}
