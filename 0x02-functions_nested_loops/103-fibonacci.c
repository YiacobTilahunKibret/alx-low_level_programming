#include <stdio.h>

/**
 * main - finds and prints the sum of even values
 * followed by a new line
 * Return: always zero
 */

int main(void)
{
	int i;
	unsigned long int j, k, l, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; +ii)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		l = j + k;
		j = k;
		k = l;
	}
	printf("%lu\n", sum);
	return (0);
}
