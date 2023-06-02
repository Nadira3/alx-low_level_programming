#include <stdio.h>
void print_buffer(char *b, int size)
{
	char *str = "This is a string..";
	int i, j = 0, k = 1;

	if (size <= 0)
	{
		putchar(10);
		return;
	}

	for (i = 0; i <= size / 10; i++)
	{
		k = j*i;
		printf("%.8x: ", k);
		for (j = 0; j < 10 && k + j < size; j = j + 2)
		{
			printf("%.2x", b[k + j];
			printf("%.2x ", b[k + j + 1]);
		}
		for (j = 0; j < 10 && k + j < size; j++)
		{
			if (b[k + j] < 32 || b[k + j] > 126)
				putchar('.');
			else
				printf("%c", b[k + j]);
			if (j == 9 || k + j == size - 1)
				putchar(10);
		}

	}
}
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
