#include "main.h"

/**
 * printf: sends formatted output to stdout
 * @format: text to be written to stdout
 *
 * returns: total number of characters written
 * on failure, a negative number is returned
 */

int _printf(const char *format, ...)
{
	int format_len, count = 0;
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
				case 'c':
					printc(va_arg(list, int));
					break;
				case 's':
					string = va_arg(list, char *);
					while (string && *string != '\0')
					{
						printc(*string++);
					}
					break;
				default:
					break;
			}
		}
		else
			printc(format[count]);
		count++;
	}

	va_end(list);
	return(format_len);
}
