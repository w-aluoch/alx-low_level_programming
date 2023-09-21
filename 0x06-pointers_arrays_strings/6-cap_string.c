#include "main.h"
#include <stdio.h>

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string to be capitalzied
 * Return: a pointer to the returned string
 */

char *cap_string(char *str)
{
	int i = 0;

	int capitalize = 1;

	while (str[i] != '\0')
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}')
	{
	capitalize = 1;
	}
	else
	{
	if (capitalize && str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 32;
	capitalize = 0;
	}
	else if (!capitalize && str[i] >= 'A' && str[i] <= 'Z')
	{
	str[i] = str[i] + 32;
	}
	else
	{
	capitalize = 0;
	}
	}
	i++;
	}

	return (str);
}
