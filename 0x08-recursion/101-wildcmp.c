#include <stdio.h>
int wildfirst(char *s, char *t)
{
        if (!*s)
                return (0);
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
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
