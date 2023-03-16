#include "main.h"
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument variable
 * Return: pointer to a list of argv printed on separate lines
 */
int _strlen(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(s + 1));
}
char *argstostr(int ac, char **av)
{
	char *str;
	int av_len[20];
	int i, j, str_len = 0, tot_len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		av_len[i - 1] = _strlen(av[i]);
		tot_len += av_len[i - 1];
	}
	str = malloc(sizeof(char) * (tot_len + ac));
	if (str == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < av_len[i - 1]; j++, str_len++)
		{
			str[str_len] = av[i][j];
		}
		str[str_len] = '\n';
		str_len++;
	}
	return (str);
}
