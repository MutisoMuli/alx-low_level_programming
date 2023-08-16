#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Utilizes a function pointer to print a given name.
 * @name: The name to be printed.
 * @f: A pointer to the printing function.
 *
 * This function takes a name and a function pointer as parameters.
 * If the name and function pointer are valid, it invokes the provided
 * function to print the name.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
