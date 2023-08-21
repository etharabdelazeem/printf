#include "main.h"

/**
 * printS - print special string
 * @list: list of arguments
 * Return: printed amount
 */
int printS(va_list list)
{
	int length, return_value;
	char *string, *string2;

	string2 = va_arg(list, char *);
	if (!string2)
	{
		write(1, "(null)", 6);
		return (6);
	}

	length = _strlen(string2) + 1;
	string = malloc(sizeof(string2[0]) * length);
	string = string2;

	if (!string)
		free(string);
	length = 0;

	while (string[length] != '\0')
	{
		if (string[length] < 32 || string[length] >= 127)
		{
			_putchar('\\'), _putchar('x');
			if (string[length] < 16)
				_putchar('0'), printH(string[length]);
			else
				printH(string[length]);
			(return_value) += 4;
		}
		else
			_putchar(string[length]), (return_value)++;
		length++;
	}
	free(string);
	return (return_value);
}
