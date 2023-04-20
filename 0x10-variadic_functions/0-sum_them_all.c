#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the number of the parameters passed.
 * @...: the variable number of the parameters to calculate the sum of.
 * Return: sum, otherwise zero (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vafunc;
	unsigned int e;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(vafunc, n);

	for (e = 0; e < n; ++e)
	{
		sum += va_arg(vafunc, int);
	}

	va_end(vafunc);

	return (sum);
}
