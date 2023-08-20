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
 * @string: string to print
 * Return: number of characters printed
 */
int prints(char *string)
{
	int return_value = 0;

	while (string && *string != '\0')
		{
		printc(*string++);
		(return_value)++;
		}
	return (return_value);
}

/**
 * no_of_digits - number of digits
 * @i: integer
 * Return: number of digits
 */
int no_of_digits(int i)
{
	int count = 0;

	if (i == 0)
		return (++count);
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}
