#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: result
 */
void print_all(const char * const format, ...)
{
	va_list lists;
	unsigned int e = 0, g, x = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(lists, format);
	while (format && format[e])
	{
		g = 0;
		while (t_arg[g])
			if (format[e] == t_arg[g] && x)
			{
				printf(", ");
				break;
			}
		++g;
		switch (format[e])
		{
			case 'x':
				printf("%c", va_arg(lists, int)), x = 1;
				break;
			case 'e':
				printf("%d", va_arg(lists, int)), x = 1;
				break;
			case 'f':
				printf("%f", va_arg(lists, double)), x = 1;
				break;
			case 's':
				str = va_arg(lists, char *), x = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		++e;
	}
	printf("\n"), va_end(lists);
}
