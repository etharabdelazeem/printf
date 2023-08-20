#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct - new type
 * @ch: character
 * @f: pointer to function
 */
typedef struct functions
{
	char ch;
	int (*f)();
} fun;

int _putchar(char c);
int printc(va_list list);
int prints(va_list list);
int printd(va_list list);
int _printf(const char *format, ...);
int no_of_digits(int i);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

#endif
