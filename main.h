#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct functions - new type
 * @ch: character
 * @f: pointer to function
 */
typedef struct functions
{
	char *ch;
	int (*f)(va_list list);
} fun;

int _putchar(char c);
int printc(va_list list);
int prints(va_list list);
int printb(va_list list);

int printd(va_list list);
int printd_l(va_list list);
int printd_h(va_list list);

int printu(va_list list);
int printu_h(va_list list);
int printu_l(va_list list);

int printo(va_list list);
int printo_h(va_list list);
int printo_l(va_list list);

int printh(unsigned int);
int printhex(va_list list);
int printH(unsigned int);
int printHEX(va_list list);
int printS(va_list list);
int printp(va_list list);

int tnirp(va_list list);
int print_rot13(va_list list);

int _printf(const char *format, ...);

int no_of_digits(unsigned int i, int base);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

int (*check(const char *ch, int index))(va_list list);
int check2(const char *ch, int index);

#endif
