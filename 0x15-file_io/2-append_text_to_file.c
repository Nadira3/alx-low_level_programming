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
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, len = text_content ? _strlen(text_content) : 0, checker;

	if (filename)
	{
		n = open(filename, O_WRONLY | O_APPEND);
		if (n == -1)
			return (n);
		checker = write(n, text_content, len);
		if (checker == -1)
			return (checker);
		close(n);
		return (1);
	}
	return (-1);
}
