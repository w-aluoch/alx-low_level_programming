#include "main.h"
#include <stdio.h>


/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
}
