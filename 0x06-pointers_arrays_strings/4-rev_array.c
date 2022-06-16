#include "main.h"

/**
 * reverse_array  - entry point
 * Description: fuction that reverses the content
 * of an array of integers
 * @a: pointer passed in argument
 * @n: number of elements of the array in  argument
 * Return: reversed content
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
	}
}
