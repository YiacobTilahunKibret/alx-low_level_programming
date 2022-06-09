#include "main.h"

/**
 * print_most_numbers - prints most numbers 0 t 9
 * except 2 and 4
 * Returns: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 &&  i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
