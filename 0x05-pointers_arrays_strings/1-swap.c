#include "main.h"

/**
 * swap_int - Function to swap the values of two integers
 *
 * @a: first value input
 * @b: Second value input
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
