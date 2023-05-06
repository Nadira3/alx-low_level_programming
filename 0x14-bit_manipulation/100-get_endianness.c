#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *e_checker = (char *)&num;

	if (*e_checker == 1)
		return (1);
	return (0);
}
/**
 * Description - how it works
 * declare an integer variable num with the value 1. We then create a pointer
 * to a character-sized variable e_checker and set it to point to the
 * address of num. We then check the value of the first byte
 * pointed to by e_checker.
 *
 * If it is equal to 1, the system is little endian, otherwise it is big endian
 * because in a little endian system, the least significant byte of a
 * multi-byte integer is stored first in memory, while in a big endian system,
 * the most significant byte is stored first.
 */
