#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints in reverse lower-case alphabets 
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

