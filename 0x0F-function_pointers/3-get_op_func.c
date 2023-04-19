#include "3-calc.h"

/**
 * get_op_func - function to perform the operation asked by the user.
 * @s: The char operator passed as argument.
 * Return: A pointer to the function that correspond to the operator given
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int e = 0;

	while (e < 10)
	{
		if (s[0] == ops->op[e])
			break;
		++e;
	}
	return (ops[e / 2].f);
}
