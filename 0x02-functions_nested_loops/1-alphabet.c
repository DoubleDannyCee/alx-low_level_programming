#include "main.h"

/**
 * print_alphabet- function that prints lowercase alphabets  with a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
