#include "main.h"

/**
 * _puts - Entry point
 * Description: a function that prints a string followed by a new line
 * @str: a pointer parameter passed
 * Return: Always zero
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
