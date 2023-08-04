#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program to print all received arguments.
 * @argc: The number of arguments received by the program.
 * @argv: An array of pointers to strings representing the arguments.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
