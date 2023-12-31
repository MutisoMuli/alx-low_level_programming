#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit in a decimal number.
 * @n: The number to examine.
 * @index: The position (index) of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index, or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
