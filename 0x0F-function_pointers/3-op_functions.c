#include "3-calc.h"

/**
 * op_add - Computes the sum of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The sum of operands a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Computes the difference between two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The difference of operands a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Computes the product of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The product of operands a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Computes the division of two numbers.
 * @a: The numerator.
 * @b: The denominator (non-zero).
 *
 * Return: The quotient of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the modulo (remainder) of two numbers.
 * @a: The dividend.
 * @b: The divisor (non-zero).
 *
 * Return: The remainder of dividing a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
