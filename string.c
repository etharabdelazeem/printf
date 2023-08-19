#include "main.h"

/**
 * _strlen - return the length
 * @s: the string
 * Return: int the length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

/**
 * prints - print strings
 * @string: string tp print
 * Return: nothing
 */
int prints(char *string)
{
	while (string && *string != '\0')
	{
		printc(*string++);
	}
	return (0);
}
