#include "main.h"

/**
 * *_strncat - entry of program
 * Description - a function that concatenates two strings with
 * n bytes from second string
 * @dest: pointer passed in argument
 * @src: pointer passed in argument
 * @n: bytes passed in argument
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
