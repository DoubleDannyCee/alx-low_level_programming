#include "main.h"

/**
 * print_last_digit - print the last digit of an integer
 *
 * @n: integer to compute
 *
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int l_digit = n % 10;

	if (l_digit < 0)
		l_digit *= -1;

	_putchar(l_digit + '0');

	return (l_digit);
}
