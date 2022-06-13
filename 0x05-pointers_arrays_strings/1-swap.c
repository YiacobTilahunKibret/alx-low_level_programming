#include "main.h"

/**
 * swap_int - Entry point
 * Description: a function that swaps the values of two integers
 * @a: the pointer a that points to int value
 * @b: the pointer a that points to int value
 * Return: Always zero
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
