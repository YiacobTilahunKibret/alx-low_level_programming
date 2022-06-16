#include "main.h"

/**
 * cap_string  - entry point
 * Description: function that capitalizes all
 * words of a string.
 * @s: string parameter passed
 * Return: uppercase string
 */

char *cap_string(char *s)
{
	char special[] = {'(', ')', '{', '}',
	'"', '!', '?', '.', ';', ',', '\n', 9, 32};
	int length = 13;
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (j < length)
		{
			if ((i == 0 || s[i - 1] == special[j]) && (s[i] >= 97 && s[i] <= 122))
				s[i] = s[i] - 32;
			j++;
		}
		i++;
	}
	return (s);
}
