#include "main.h"
/**
 * printh - printhex
 * @i: number to print
 * Return: printed amount
 */
int printh(unsigned int i)
{
	int return_value = 0, base = 16;
	char letter[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	unsigned int rem;

	rem = i % 16;
	if (i == 0)
		return (return_value);
	if (i == 1)
	{
		_putchar(i + '0');
		return (return_value);
	}

	printh(i / 16);

	if (rem > 9)
		_putchar(letter[rem - 10]);
	else
		_putchar(rem + '0');

	(return_value) = no_of_digits(i, base);

	return (return_value);
}

/**
 * printhex - printhexadecimal
 * @list: var_list
 * Return: printed amount of chars
 */
int printhex(va_list list)
{
	int i, return_value = 0;
	unsigned int i2;

	i = va_arg(list, int);

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
	else
		i2 = i;
	(return_value) = printh(i2);

	return (return_value);
}
