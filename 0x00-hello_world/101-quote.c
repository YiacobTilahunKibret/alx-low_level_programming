#include <stdio.h>
#include <unistd.h>
/**
 * main - prints and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Description: uses unistd.h lib
 * Return: 0
 */

int main(void)
{
	write(2, "\nand that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return(1);
}
