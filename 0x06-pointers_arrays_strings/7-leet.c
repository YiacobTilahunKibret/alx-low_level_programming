#include "main.h"

/**
 * leet - entry point
 * Description: function that encodes
 * a string into 1337
 * @s: string parameter passed
 * Return: uppercase string
 */

char *leet(char *s)
{
	int i = 0, j;
	int length = 5;
	char replace[5] = {'A', 'E', 'O', 'T', 'L'};
	char replaceby[5] = {'4', '3', '0', '7', 'l'};

	while (s[i])
	{
		j = 0;

		while (j < length)
		{
			if (s[i] == replace[j] || s[i] - 32 == replace[j])
				s[i] = replaceby[j];
			j++;
		}
		i++;
	}
	return (s);
}
