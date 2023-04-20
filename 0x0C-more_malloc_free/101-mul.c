#include "main.h"
/**
 * _isdigit - checks if all the charcaters in an argument
 * are digits
 * @str: pointer to string
 * Return: 1 || 0
 */
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
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (_isdigit(argv[i]))
				mul *= atoi(argv[i]);
			else
			{
				printf("Error\n");
				exit(98);
			}
		}
		printf("%d\n", mul);
	}
	return (0);
}
