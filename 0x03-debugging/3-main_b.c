#include <stdio.h>
#include "main.h"

/**
 * main - Checks if a date is a leap year
 * Return: Always 0
 */
int main(void)
{
	int year = 2000;
	int month = 2; /* February */
	int day = 29; /* 29th day */

	int result; /* Change 'char *' to 'int' */

	result = convert_day(month, day);

	if (result)
		printf("%d/%d/%d is a leap year.\n", month, day, year);
	else
		printf("%d/%d/%d is not a leap year.\n", month, day, year);

	return (0);
}
