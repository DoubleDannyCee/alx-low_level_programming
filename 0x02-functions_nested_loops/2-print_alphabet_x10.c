#include "main.h"

/**
 * print_alphabet_x10- function prints lowercase alphabets 10x with new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 11)
	{
		char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	x++;
	}
	_putchar('\n');
}
