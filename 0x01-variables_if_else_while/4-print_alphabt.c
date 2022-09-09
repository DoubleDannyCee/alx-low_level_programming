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
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if((alphabet != 'q') && (alphabet != 'e'))
		{
			purtchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
