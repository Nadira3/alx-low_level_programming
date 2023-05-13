#include "main.h"
/**
 * main - entry point of the program
 * @ac: argument count starting from zero
 * @av: list of argument variables
 * Return: void
 */
int main(int ac, const char **av)
{
	int n_one, n_two, ca, cb, n_byte, n_write;
	char *ptr;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	n_one = open(av[1], O_RDONLY);
	if (n_one == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	ptr = malloc(BUFSIZ);
	if (!ptr)
		return (-1);
	n_two = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (n_two == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((n_byte = read(n_one, ptr, BUFSIZ)) > 0)
	{
		n_write = write(n_two, ptr, n_byte);
		if (n_write == -1)
			exit(99);
	}
	if (n_byte == -1)
		exit(98);
	ca = close(n_one);
	cb = close(n_two);
	if (ca == -1 || cb == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ca == -1 ? ca : cb);
		exit(100);
	}
	free(ptr);
	return (0);
}
