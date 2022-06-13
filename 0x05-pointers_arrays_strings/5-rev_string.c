#include "main.h"

/**
 * rev_string - Entry point
 * Description: a function that reverses string
 * @s: a pointer parameter passed
 * Return: Always zero
 */

void rev_string(char *s)
{
	char c;
	int i, length, length2;

	length = 0;
	length2 = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length2 = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length2];
		s[length2--] = c;
	}
}
