#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always zero
 *
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
		putchar('\n');
	return (0);
}

