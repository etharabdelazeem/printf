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

	va_start(list, format);

	format_len = _strlen((char *)format);
	while (count < format_len)
	{
		if (format[count] == '%')
		{
			switch (format[++count])
			{
				case '\0':
					return (-1);
					break;
				case ' ':
					break;
				case 'c':
					(return_value) += printc(list);;
					break;
				case 's':
					(return_value) += prints(list);
					break;
				case '%':
					_putchar('%');
					(return_value)++;
					break;
				case 'd':
					(return_value) += printd(list);
					break;
				case 'i':
					(return_value) += printd(list);
					break;
				default:
					_putchar('%');
					_putchar(format[count]);
					(return_value) += 2;
					break;
			}
		}
		else if (format[count] == '\\')
		{
			if (format[++count] == '%')
				_putchar('%');
			else count--;
		}
		else
		{
			_putchar(format[count]);
			(return_value)++;
		}
		count++;
	}

	va_end(list);
	return (return_value);
}

