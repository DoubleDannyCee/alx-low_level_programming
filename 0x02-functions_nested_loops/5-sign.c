#include "main.h"

/**
 * print_sign - function that checks for sign of a number
 *
 * @n: character to check
 *
 * Return: 1 and prints + if n is greater than Zero
 *
 * 0 and prints 0 if n is zero
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
