#include <stdio.h>

/**
 * main - print alphabet reversed with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
