#include "main.h"

/**
 * *_strcat - entry of program
 * Description - a function that concatenates two strings
 * @dest: pointer passed in argument
 * @src: pointer passed in argument
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return
		(dest);
}
