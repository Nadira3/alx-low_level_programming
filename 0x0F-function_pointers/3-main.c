#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int (*fptr)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fptr = get_op_func(argv[2]);
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = fptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
