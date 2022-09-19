#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	for (x = x - 1; s[x] != '\0'; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
