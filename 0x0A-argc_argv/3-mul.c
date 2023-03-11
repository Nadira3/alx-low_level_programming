#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
