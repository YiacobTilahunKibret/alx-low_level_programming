#include "main.h"
/**
 * find_root - calculates i**i to check with n
 * @n: base number
 * @i: iterator number
 * Return: i
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (find_root(n, i + 1));
	else
		return (-1);
}
