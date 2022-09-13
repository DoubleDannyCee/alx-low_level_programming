/*
 * Doc: 9-times_table.c
 * By Daniel Ezeoke
 */

#include "main.h"

/**
 * times_table - Displays 9 times table
 */

void times_table(void)
{
	int x,y,z;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_purtchar(' ');

			z = x * y;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}


