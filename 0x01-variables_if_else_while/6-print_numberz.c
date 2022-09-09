#include <stdio.h>

/**
 * main - print 0-9 using putchar
 *
 * Return: Always 0 (succcess)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return(0);
}
