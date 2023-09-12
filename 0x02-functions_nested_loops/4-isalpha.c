#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character (a-zA-Z)
 * @c: character to check
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
