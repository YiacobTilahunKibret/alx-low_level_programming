#include "main.h"

/**
 * print_line - prints a line
 * @n: variable passed
 *
 * Return: zero
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
