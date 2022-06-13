#include "main.h"

/**
 * print_rev - Entry point
 * Description: a function that prints a string in reverse, then a new line
 * @s: a pointer parameter passed
 * Return: Always zero
 */

void print_rev(char *s)
{
	int i, j, k;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	k = i;

	for (j = k - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
