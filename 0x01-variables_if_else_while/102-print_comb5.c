#include<stdio.h>

/**
 * main - print a number of pais without repitition
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;
	int t;
	int o;
	int c = 1;

	while (c <= 2)
	{

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t = tens; t <= '9'; t++)
			{
			for (o = ones + 1; o <= '9'; o++)
			{
				putchar(tens);
				putchar(ones);
				putchar(' ');
				putchar(t);
				putchar(o);

				if (!((tens == '9' && ones == '9') && (t == '9' && o == '9')))
				{
					putchar(',');
					putchar(' ');
				}
			}
			o = '0';
		}
	}
}
c++;
}
putchar('\n');

return (0);
}

