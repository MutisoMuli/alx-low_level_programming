#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Determines the appropriate operation function
 *               based on the provided operator.
 * @s: The operator for which the function is sought.
 *
 * Return: A pointer to the function that corresponds to the given operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =

	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}

	return (ops[i].f);
}
