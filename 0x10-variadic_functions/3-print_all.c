#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: result
 */

void print_all(const char * const format, ...)
{
	int e = 0;
	char *str, *set = "";

	va_list lists;

	va_start(lists, format);

	if (format)
	{
		while (format[e])
		{
			switch (format[e])
			{
				case 'c':
					printf("%s%c", set, va_arg(lists, int));
					break;
				case 'e':
					printf("%s%d", set, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", set, va_arg(lists, double));
					break;
				case 's':
					str = va_arg(lists, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", set, str);
					break;
				default:
					++e;
					continue;
			}
			set = ", ";
			++e;
		}
	}

	printf("\n");
	va_end(lists);
}
