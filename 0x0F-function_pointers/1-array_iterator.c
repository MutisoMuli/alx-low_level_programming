#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterate through an array and apply a provided action.
 * @array: The array to be iterated.
 * @size: The number of elements in the array.
 * @action: A function pointer to the action applied to each element.
 *
 * Takes an array, its size, and a function pointer as parameters.
 * Iterates through the array and applies the provided action.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
