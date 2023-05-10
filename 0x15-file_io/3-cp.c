#include "main.h"
/**
 * _strlen - finds the length of a string
 * @text: string argument
 * Return: length of string
 */
int _strlen(char *text)
{
	if (!*text)
		return (0);
	return (1 + _strlen(text + 1));
}
/**
 * main - entry point of the program
 * @ac: argument count starting from zero
 * @av: list of argument variables
 * Return: void
 */
int main(int ac, const char **av)
{
	int n_one, n_two, ca, cb, n_byte = 0, total_bytes = 0;
	char *ptr;

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	n_one = open(av[1], O_RDONLY);
	if (n_one == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	ptr = malloc(BUFSIZE);
	if (!ptr)
		return (-1);

	n_two = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (n_two == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (n_one != EOF)
	{
		n_byte = read(n_one, ptr, BUFSIZE - total_bytes);
		if (n_byte == 0)
			break;
		total_bytes += n_byte;
		write(n_two, ptr, n_byte);
	}
	ca = close(n_one);
	cb = close(n_two);
	if (ca == -1 || cb == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %i\n", ca == -1 ? ca : cb);
		exit(100);
	}
	free(ptr);
	return (1);
}
