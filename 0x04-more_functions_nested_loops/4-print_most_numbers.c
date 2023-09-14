#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * followed by a new line
 * Description: should not print 2 and 4
 * Return: prints the numbers, from 0 to 9, followed by a new line
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			putchar(x + '0');
		}
	}
	putchar('\n');
}
