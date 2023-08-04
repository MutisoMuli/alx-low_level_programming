#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program to calculate the minimum number of coins.
 * @argc: The number of arguments in the program.
 * @argv: Array of arguments in the program.
 *
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int num, a, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coins[a])
		{
			result++;
			num -= coins[a];
		}
	}

	printf("%d\n", result); /* Print the minimum number of coins */
	return (0);
}
