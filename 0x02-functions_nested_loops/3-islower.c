#include "main.h"
/**
 * _islower - entry point
 * Description: checks the charachter is lowercase or uppercase
 * and returns 1 or 0 respectively
 * @c: this is a character arguement
 * Return: 0
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
