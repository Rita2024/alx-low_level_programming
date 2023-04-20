#include "variadic_functions.h"

/**
 * print_numbers - functiin that print numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function.
 * @...: a variable number of numbers to be printed.
 * Return: result
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vafunc;
	unsigned int e;

	va_start(vafunc, n);

	for (e = 0; e < n; ++e)
	{
		printf("%d", va_arg(vafunc, int));
		if (e < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vafunc);
}
