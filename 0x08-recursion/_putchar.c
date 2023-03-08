#include <unistd.h>
/**
 * main - writes a character to stdout
 * Return: 0 if successful, -1 if error occurs
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
