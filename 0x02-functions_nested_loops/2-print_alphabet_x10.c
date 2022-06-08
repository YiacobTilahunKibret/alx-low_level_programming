#include "main.h"

/**
 * print_alphabet_x10 - prints _a to z 10 times followed by new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
