#include "main.h"

/**
 * *_strcpy - Entry point
 * Description: function that copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest: a pointer parameter passed
 * @src: a string parameter passed to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
