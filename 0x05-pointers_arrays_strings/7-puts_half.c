#include "main.h"

/**
 * puts_half - Entry point
 * Description: a function that prints half of a string then
 * followed by a new line
 * @str: a string parameter passed
 * Return: Always zero
 */

void puts_half(char *str)
{
	int i, n, length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length % 2)
	{
		for (n = (length - 1) / 2; n < length - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
