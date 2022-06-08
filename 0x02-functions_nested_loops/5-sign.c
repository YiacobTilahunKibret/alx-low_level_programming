#include "main.h"

/**
 * print_sign - Entry point
 * Description: retuns 1 if positive number, 0 if zero
 * -1 if the value is less than zero
 * @n: argument passed
 * Return: 1 , 0, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
