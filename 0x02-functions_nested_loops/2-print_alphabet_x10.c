#include "main.h"

/**
 * print_alphabet_x10- function prints lowercase alphabets 10x with new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int x;
	char a;

	a = 'a';
	x = 1;

	while (x <= 11)
	{

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	x++;
	}
	_putchar('\n');
}
