#include "main.h"

/**
 * _printf - sends formatted output to stdout
 * @format: text to be written to stdout
 *
 * Return: total number of characters written
 * on failure, a negative number is returned
 */

int _printf(const char *format, ...)
{
	int format_len, count = 0, return_value = 0;
	va_list list;
	char *string;

	va_start(list, format);

	format_len = _strlen((char *)format);
	while (count < format_len)
	{
		if (format[count] == '%')
		{
			switch (format[++count])
			{
				case '\0':
					break;
				case ' ':
					break;
				case 'c':
					printc(va_arg(list, int));
					(return_value)++;
					break;
				case 's':
					string = va_arg(list, char *);
					(return_value) += prints(string);
					break;
				case '%':
					printc('%');
					(return_value)++;
					break;
				default:
					printc('%');
					printc(format[count]);
					(return_value) += 2;
					break;
			}
		}
		else
		{
			printc(format[count]);
			(return_value)++;
		}
		count++;
	}

	va_end(list);
	return (return_value);
}
