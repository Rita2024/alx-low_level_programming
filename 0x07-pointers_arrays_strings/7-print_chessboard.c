#include "main.h"

/**
 * print_chessboard -functiins that print chessboard
 * @a: the array
 * Return: result
 */

void print_chessboard(char (*a)[8])
{
	int alx, africa;

	for (alx = 0; alx < 8; alx++)
	{
		for (africa = 0; africa < 8; africa++)
			_putchar(a[alx][africa]);
		_putchar('\n');
	}
}
