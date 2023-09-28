#include "main.h"

/**
 * set_bit - Modifies the value of a specific bit in a decimal number.
 * @n: Pointer to the number to be updated.
 * @index: The position (index) of the bit to be set.
 *
 * Return: 1 if the operation was successful, or -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	num <<= index;
	*n = *n | num;
	return (1);
}
