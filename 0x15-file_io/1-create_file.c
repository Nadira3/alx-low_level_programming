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
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string to be written to the file
 * Return: 1 on success, -1 on failure (file can not be created, file
 * can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int n, len = _strlen(text_content);

	if (!filename)
		return (-1);
	n = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (n == -1)
		return (n);
	write(n, text_content, len);
	close(n);
	return (1);
}
