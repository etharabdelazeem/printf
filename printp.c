#include "main.h"

/**
 * printp: - prints the memory address in hexadecimal form.
 * @list: arguments.
 * Return: number of arguments printed
 */
int printp(va_list list)
{
	int *ptr;
	char *str = "(nil)";
	long int a;
	int b;
	int i;

	ptr = va_arg(list, int*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = printhex(a);
	return (b + 2);
}
