#include <stdio.h>

/**
 * main - output 0-9 with commas as separations using putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
