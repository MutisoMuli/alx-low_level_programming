#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program to display the number of arguments.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to strings representing the arguments.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Ignoring argv to prevent unused variable warning */
	printf("%d\n", argc - 1);
	return (0);
}
