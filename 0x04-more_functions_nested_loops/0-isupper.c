#include "main.h"
/**
 * _isupper - function that check if it is uppercase character
 * @c: number to be checked
 * Return: 1 if it is uppercase or 0 if it is otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
