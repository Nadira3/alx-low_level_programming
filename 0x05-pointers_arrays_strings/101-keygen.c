#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int j, r;
	int seed;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <seed>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	seed = atoi(argv[1]);

	srand(seed);
	for (j = 0; j < seed; j++) {
		r =  rand();
		printf("%d\n", r);
	}

	exit(EXIT_SUCCESS);
}
