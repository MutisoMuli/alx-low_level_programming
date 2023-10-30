#include "main.h"

/**
 * clear_bit - Clears (sets to 0) a specific bit in a number.
 * @n: Pointer to the number to be modified.
 * @index: The index of the bit to be cleared.
 *
 * Return: 1 if the operation was successful, or -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
