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

/**
 * printhex - printhexadecimal
 * @list: var_list
 * Return: printed amount of chars
 */
int printhex(va_list list)
{
	int i, count, return_value = 0, tens = 1, c, num, base = 16;
	char letter[] = {'a', 'b', 'c', 'd', 'e', 'f'};

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
		if (num > '9')
			_putchar(letter[num - 10]);
		else
			_putchar('0' + num);
		(return_value)++;
		tens /= base;
		count--;
	}
	return (return_value);
}

/**
 * printHEX - printhexadecimal
 * @list: var_list
 * Return: printed amount of chars
 */
int printHEX(va_list list)
{
	int i, count, return_value = 0, tens = 1, c, num, base = 16;
	char letter[] = {'A', 'B', 'C', 'D', 'E', 'F'};

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
		if (num > '9')
			_putchar(letter[num - 10]);
		else
			_putchar('0' + num);
		(return_value)++;
		tens /= base;
		count--;
	}
	return (return_value);
}

/**
 * printb - converts unsigned int into binary
 * @list: var_list
 * Return: number of digits printed.
 */
int printb(va_list list)
{
	int rem, return_value = 0;
	int num = va_arg(list, unsigned int);

	while (num)
	{
		rem = num % 2;
		num = num / 2;
		_putchar(rem + '0');
		(return_value)++;
	}

	return (return_value);
}
