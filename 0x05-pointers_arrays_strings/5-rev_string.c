#include "main.h"
#include <stdio.h>

/**
 * rev_string - The function to print the reverse of a string
 *@s: String to print in reverse order
 * Return: Always zero
 */
void rev_string(char *s)
{
	char f;
	int i, g, t;

	g = 0;
	t = 0;

	while (s[g] != '\0')
	{
		g++;
	}

	t = g - 1;

	for (i = 0; i < g / 2; i++)
	{
		f = s[i];
		s[i] = s[t];
		s[t--] = f;
	}

