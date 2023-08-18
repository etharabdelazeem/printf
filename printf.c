#include "main.h"

/** printf: sends formatted output to stdout
* @format: text to be written to stdout
*
*
* returns: total number of characters written
*on failure, a negative number is returned
*/
int _printf(const char *format, ...)
{
unsigned int i;
format = malloc(sizeof (char) * format_len);
int format_len = sizeof(format)/ sizeof(format[0]);
va_list list;

va_start(list, format_len);

#code goes here

va_end(list);
free(format);

return(i);
}
