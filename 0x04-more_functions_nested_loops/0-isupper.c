#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: character argument
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 97)
		return (1);
	else
		return (0);
}
