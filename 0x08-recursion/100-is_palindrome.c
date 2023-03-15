#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 0 || 1
 */
int _strlen(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(s + 1));
}
int checker(char *s, char *s2)
{
	if (*s != *s2)
		return (0);
	if (s - s2 == 1 || (s - s2 == 2 && *s == *s2))
		return (1);
	return (checker (s + 1, s2 - 1));
}
int is_palindrome(char *s)
{
	char *s2 = s + (_strlen(s) - 1);
	if (!(*s))
		return (1);
	return (checker(s, s2));

}
