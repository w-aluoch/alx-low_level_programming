#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of lines to draw
 * Return: always (0)
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
			else
			{
				for (x = 0; x < n; x++)
				{
					putchar(95);
				}
				putchar('\n');
			}
}
