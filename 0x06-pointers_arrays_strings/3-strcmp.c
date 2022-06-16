#include "main.h"

/**
 * _strcmp - entry point
 * Description: fuction that compares two strings
 * @s1: pointer passed in argument
 * @s2: pointer passed in argument
 * Return: return 0 if s1 equals to s2, greater than
 * 1 if s1 is greater than s2, else return -1
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


