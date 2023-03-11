#include "main.h"
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int coin[] = {25, 10, 5, 2, 1};
		int i, change = 0, amt = atoi(argv[1]);

		if (amt <= 0)
			printf("%d\n", change);
		else
		{
			for (i = 0; amt > 0; i++)
			{
				while (amt >= coin[i])
				{
					amt -= coin[i];
					change++;
					if (!(amt))
					{
						printf("%d\n", change);
						return (0);
					}
				}
			}
		}
	}
	return (0);
}
