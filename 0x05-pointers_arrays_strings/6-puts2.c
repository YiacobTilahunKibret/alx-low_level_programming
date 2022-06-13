#include "main.h"

/**
 * puts2 - Entry point
 * Description: a function that prints every other character
 * of a string followed by a new line
 * @str: a pointer parameter passed
 * Return: Always zero
 */

void puts2(char *str)
{
	int i, length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
