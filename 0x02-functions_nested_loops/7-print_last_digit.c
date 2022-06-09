#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: prints the last digit of a number
 * @n: parameter declared
 * Return: last digit
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = n * -1;
	m = n % 10;
	_putchar('0' + m);
	return (m);
}
