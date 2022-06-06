#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combination of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m, l, o;

	for (n = 48; m < 58; m++)
	{
		for (m = 48; m < 58; m++)
		{
			for (l = 48; l < 58; l++)
			{
				for (o = 48; o < 58; o++)
				{
					if (((l + o) > (n + m) && l >= n) || n < l)
					{
						putchar(n);
						putchar(m);
						putchar(' ');
						putchar(l);
						putchar(o);
					if ((n + m + l + o == 227) && (n == 57))
					{
					break;
					}
					}
				}
			}
		}
		putchar('\n');
		return (0);
	}
}
