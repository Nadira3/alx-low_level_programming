#include <stdio.h>
int wildfirst(char *s, char *t)
{
        if (!*s)
	{
		if (*t == * && !*(t + 1))
			return (1);
                return (0);
	}
        if (*s == *t || *(s + 1) == *t)
                return (1);
        return wildfirst(s + 1, t);
}

int wildsecond(char *s, char *t)
{
        if (*s != *t && *t != '*')
                return (0);
        else
                return (1);
        if (*t == '*')
        {
                wildfirst(s, t);
        }
        return wildsecond(s + 1, t + 1);
}
int wildcmp(char *s1, char *s2)
{
        int wild;

        if (*s2 == '*')
        {
                if (wildfirst(s1, s2 + 1))
                {
                        wild = wildsecond(s1, s2);
                }
                else
                        return (0);
        }
        wild = wildsecond(s1, s2);
        return (wild);
}
