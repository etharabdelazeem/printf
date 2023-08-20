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

	if (string == NULL)
	{
		fputs("(null)",stdout);
		return_value += 6;
	}
	else
	{
		while (string && *string != '\0')
			{
			printc(*string++);
			(return_value)++;
			}
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

/**
 * printd - print integers
 * @i: integer
 * Return: nothing
 */
int printd(int i)
{
	int count, return_value = 0, tens = 1, c, num;

	if (i < 0)
	{
		printc('-');
		(return_value)++;
		i *= -1;
	}
	count = no_of_digits(i);
	c = count - 1;
	while (c)
	{
		tens *= 10;
		c--;
	}
	while (count)
	{
		num = (i / tens) % 10;
		printc('0' + num);
		(return_value)++;
		tens /= 10;
		count--;
	}
	return (return_value);
}
