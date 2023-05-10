#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of characters to be read
 * Return: returns the actual number of letters it could read and print || 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, n_byte = 0;
	size_t total_bytes = 0;
	char *ptr;

	if (filename)
	{
		n = open(filename, O_RDONLY);
		if (n == -1)
			return (0);
		ptr = malloc(BUFSIZ);
		if (!ptr)
			return (0);
		while (total_bytes <= letters)
		{
			n_byte = read(n, ptr, letters);
			total_bytes += n_byte;
			write(STDOUT_FILENO, ptr, n_byte);
			if (!n_byte || (size_t)n_byte == letters)
				return (total_bytes);
		}
		free(ptr);
		close(n);
	}
	return (0);
}
