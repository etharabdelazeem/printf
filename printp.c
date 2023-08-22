#include "main.h"

/**
 * printp: - prints the memory address in hexadecimal form.
 * @list: arguments.
 * Return: number of arguments printed
 */
int printp(va_list list)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(list, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printhex(a);
	return (b + 2);
}
