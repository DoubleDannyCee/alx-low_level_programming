#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: character to check
 *
 * Return: 1 is c if lowercase and 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

