/*
 * Doc: 11-print_to_98.c
 * By Daniel Ezeoke
 */

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from input to 98,
 *		In order separated by a comma followed by a space.
 *
 *@n: The number to input
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
