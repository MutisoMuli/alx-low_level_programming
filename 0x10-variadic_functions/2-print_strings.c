#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Display strings with a new line in between.
 * @separator: The string to be shown between strings.
 * @n: The count of strings provided to the function.
 * @...: An unspecified count of strings to display.
 * Description: If separator is NULL, it won't be displayed.
 * If any of the strings is NULL, "(nil)" will be displayed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && index != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
