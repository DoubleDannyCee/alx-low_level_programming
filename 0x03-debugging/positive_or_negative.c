#include "main.h"
/**
 * positive_or_negative - To check if 98 is +ve or -ve
 * @i: i is the number to check
 *
 * return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
