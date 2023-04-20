#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * @...: a variable number of string to be printed.
 * Return: result
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pstr;
	unsigned int e;
	const char *str;

	va_start(pstr, n);
	for (e = 0; e < n; ++e)
	{
		str = va_arg(pstr, const char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (e < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(pstr);
}
