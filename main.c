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

	_printf("something\n");
	_printf("an other thing %c heheehe\n", 'o');
	_printf("Let'%c ma%ce %c pu%c%cle\n", 's', 'k', 'a', z, z);
	_printf("Strin%c %s %s\n", 'g', "this", str);
	_printf("o\"\'\\% %% \n %i %d\n");

	return (0);
}
