#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Display numbers with a new line in between.
 * @separator: The string to be shown between the numbers.
 * @n: The count of integers given to the function.
 * @...: An unspecified count of numbers to display.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && index != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
