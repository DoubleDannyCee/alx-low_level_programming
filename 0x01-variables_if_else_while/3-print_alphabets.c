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
	char ALPHABET;
	alphabet = 'a';
	ALPHABET = 'A';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (ALPHABET <= 'Z')
	{
		putchare(ALPHABET);
		ALPHABET++;
	}
	return (0);
}
