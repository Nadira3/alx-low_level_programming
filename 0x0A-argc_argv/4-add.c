#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc < 2)
		printf("%d\n", add);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (_isdigit(argv[i]))
				add += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
int _isdigit(char *str)
{
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
			return (0);
		str++;
	}
	return (1);
}
