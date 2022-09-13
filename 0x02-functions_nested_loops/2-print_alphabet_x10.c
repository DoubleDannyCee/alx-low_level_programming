#include "main.h"

/**
 * print_alphabet_x10- function prints lowercase alphabets 10x with new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 10)
	{
		char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	x++;
	}
}
