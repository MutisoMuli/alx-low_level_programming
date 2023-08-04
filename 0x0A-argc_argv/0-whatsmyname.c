#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program that displays the program name.
 * @argc: The number of command-line arguments provided to the program.
 * @argv: An array of pointers to strings containing the arguments.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
