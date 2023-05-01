#include <stdio.h>
/**
 * prelude - prints a statement before the main function is executed
 */
void __attribute__((constructor)) prelude(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
