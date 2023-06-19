#include "main.h"
/**
 * _isalpha - checks if a charcater is in lower case
 * @c: ascii value
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
