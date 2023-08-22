#include "main.h"

/**
 * printu - print base 4
 * @list: va_list
 * Return: printed amount
 */
int printu(va_list list)
{
	int i, count, return_value = 0, tens = 1, c, num, base = 4;

	i = va_arg(list, int);
	if (i < 0)
	{
		_putchar('-');
		(return_value)++;
		i *= -1;
	}
	count = no_of_digits(i, base);
	c = count - 1;
	while (c)
	{
		tens *= base;
		c--;
	}
	while (count)
	{
		num = (i / tens) % base;
		_putchar('0' + num);
		(return_value)++;
		tens /= base;
		count--;
	}
	return (return_value);
}

/**
 * printo - print octal
 * @list: list of args
 * Return: printed amount
 */
int printo(va_list list)
{
	int i, count, return_value = 0, tens = 1, c, num, base = 8;

	i = va_arg(list, int);
	if (i < 0)
	{
		_putchar('-');
		(return_value)++;
		i *= -1;
	}
	count = no_of_digits(i, base);
	c = count - 1;
	while (c)
	{
		tens *= base;
		c--;
	}
	while (count)
	{
		num = (i / tens) % base;
		_putchar('0' + num);
		(return_value)++;
		tens /= base;
		count--;
	}
	return (return_value);
}
