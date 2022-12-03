#include "main.h"

/**
 * jack_bauer - A program that prints minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 3; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					 if (a == 2 && b == 3 && c == 5 && d == 9)
				    {
				            putchar(a + '0');
					    putchar(b + '0');
					    putchar(':');
					    putchar(c + '0');
					    putchar(d + '0');
				    }
				    else
				    {
					    putchar(a + '0');
					    putchar(b + '0');
					    putchar(':');
					    putchar(c + '0');
					    putchar(d + '0');
					    putchar('\n');
				}
			}
		}
	}
}
