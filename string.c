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
	return (_strlen(string));
}

/**
 * no_of_digits - number of digits
 * @i: integer
 * Return: number of digits
 */
int no_of_digits(int i)
{
	int count = 0;

	while (i)
	{
		i /= 10;
		count++;
	}
	return (count);
}

/**
 * printd - print integers
 * @i: integer
 * Return: nothing
 */
int printd(int i)
{
	int count = no_of_digits(i), return_value = 0;
	int tens = 1, c = count - 1, num;

	while (c)
	{
		tens *= 10;
		c--;
	}
	while (count)
	{
		num = (i / tens) % 10;
		printc('0' + num);
		(return_value)++
		tens /= 10;
		count--;
	}
	return (return_value);
}
