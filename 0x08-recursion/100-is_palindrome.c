#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	char *ptr = s;
	
	if (*s)
		is_palindrome(s + 1);
	if (!(*s))
		return (*(s - 1));
	if (*s != *ptr)
		return (0);
	ptr++;
	return (1);
}
