#include <stdio.h>

char *wild(char *s)
{
	if (*s != '*')
	{
		return s;
	}
	s++;
	return wild(s);
}
int _strlen(char *s)
{
	if (!*s)
	{
		return 0;
	}
	return 1 + _strlen(s + 1);
}
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && _strlen(s2) == 1)
	{
		return 1;
	}
	if (!*s1 && !*s2)
	{
		return 1;
	}
	if (*s2 == '*')
	{
		if (*s1 == *s2 || *s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			{
				return 1;
			}
		}
	}
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return wildcmp(s1 + 1, s2 + 1);
	}
	return 0;
}
