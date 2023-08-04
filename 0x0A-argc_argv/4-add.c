#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_num - Check if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Entry point of the program to calculate the sum of valid integers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 1 on error (invalid arguments).
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /* Go through the whole array of arguments */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* Convert string to integer */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum); /* Print the sum of valid integers */
	return (0);
}
