#include "main.h"

/**
 * *_strncpy - entry point
 * Description - a function that copies a string
 * @dest: pointer passed in argument
 * @src: pointer passed in argument
 * @n: lenght passed
 * Return: pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
