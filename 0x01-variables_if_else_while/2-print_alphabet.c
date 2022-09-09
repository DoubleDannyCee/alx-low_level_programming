#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always zero
 *
 */
int main()
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;

		return (0);
	}
}

