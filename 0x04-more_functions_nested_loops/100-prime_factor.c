#include <stdio.h>

/**
 * main - prints prime factor of a number
 *
 * Return: void
 */

int main(void)
{
	long i = 612852475143;
	long j = 2;
	long prime = 0;

	while (i != 1)
	{
		if (i % j == 0)
		{
			i = i / j;
			prime = j;
		}
		j += 1;
	}
	printf("%d\n", i);
	return (0);
}
