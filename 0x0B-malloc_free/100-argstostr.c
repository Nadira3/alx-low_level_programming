#include "main.h"
#include <stdio.h>
/**
 * _strlen - finds the lenght of a string
 * @s: string
 * Return: lenght of string
 */
int _strlen(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument variable
 * Return: pointer to a list of argv printed on separate lines
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, str_len = 0, tot_len;
	int *av_len;

	av_len = malloc(ac * sizeof(int));

	if (ac == 0 || av == NULL || av_len == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		av_len[i] = _strlen(av[i]);
		tot_len += av_len[i] + 1;
	}
	str = malloc(tot_len + ac + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av_len[i]; j++, str_len++)
		{
			str[str_len] = av[i][j];
		}
		str[str_len] = '\n';
		str_len++;
	}
	free(av_len);
	return (str);
}
