#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char z = 'z';
	char *str = "I thought It was my code, it turned out to be me";

	printf("%d\n", _printf("something\n"));
	printf("%d\n", _printf("an other thing %c heheehe\n", 'o'));
	printf("%d\n", _printf("Let'%c ma%ce %c pu%c%cle\n", 's', 'k', 'a', z, z));
	printf("%d\n", _printf("Strin%c %s %s\n", 'g', "this", str));
	printf("%d\n", _printf("o\"\'\\% %% \n %k %k\n"));
	printf("%d\n", _printf("%d \t %i\n", 4754, -3267478));
	printf("%d\n", _printf("%o, %i", 5555555555, NULL));
	printf("%d\n", _printf("%b %b %b, %b %b %b", 7, 8, 17, 0, NULL, -1));
	printf("%d\n", _printf("%S"), "abcd\n\t");
	_printf("%x_s ", 54338), printf("%x ", 54338);
	_printf("%X_c ", 54338), printf("%X ", 54338);

	return (0);
}
