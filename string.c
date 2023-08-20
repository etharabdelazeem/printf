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
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: less than 0 if s1 is less than s2,
 * 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * prints - print strings
 * @list: list of arguments
 * Return: number of characters printed
 */
int prints(va_list list)
{
	int return_value = 0;
	char *string;

	string = va_arg(list, char *);
	if (!string)
	{
		string = "(null)";
	}
	while (string && *string != '\0')
	{
		_putchar(*string++);
		(return_value)++;
	}
	return (return_value);
}

/**
 * printd - print integers
 * @i: integer
 * Return: nothing
 */
int printd(va_list list)
{
	int i, count, return_value = 0, tens = 1, c, num;

	i = va_arg(list, int);
	if (i < 0)
	{
		_putchar('-');
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
		_putchar('0' + num);
		(return_value)++;
		tens /= 10;
		count--;
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

