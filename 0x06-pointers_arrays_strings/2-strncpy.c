#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies a string
 * @dest: stores the string copy
 * @src: string source
 * @n: number of bytes to copy from src
 * Return: a pointer to the returning string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
