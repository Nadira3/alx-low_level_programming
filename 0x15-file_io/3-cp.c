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
	n_two = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (n_two == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (chmod(av[2], 0644) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't set file permission for %s\n", av[2]);
		exit(100);
	}
	while (n_byte != EOF)
	{
		n_byte = read(n_one, ptr, BUFSIZ - total_bytes);
		if (n_byte == 0)
			break;	
		total_bytes += n_byte;
	}
	write(n_two, ptr, total_bytes);
	ca = close(n_one);
	cb = close(n_two);
	if (ca == -1 || cb == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ca == -1 ? ca : cb);
		exit(100);
	}
	free(ptr);
	return (1);
}
