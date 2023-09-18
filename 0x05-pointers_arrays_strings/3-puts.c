#include <stdio.h>
#include "main.h"

/**
 *_puts - a function that prints a string, followed by a new line, to stdout
 *@str: integer input
 *Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
