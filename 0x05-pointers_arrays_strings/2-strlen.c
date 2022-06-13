#include "main.h"

/**
 * _strlen - Entry point
 * Description: a function that returns the length of a string
 * @s: a character parameter passed
 * Return: Always zero
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] != '\0')
		{
			continue;
		}
		else
		{
			break;
		}
	}
	return (i);
}
