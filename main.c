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

	_printf("something\n");
	_printf("an other thing %c heheehe\n", 'o');
	_printf("Let'%c ma%ce %c pu%c%cle\n", 's', 'k', 'a', z, z);
	_printf("Stringg %s", "this\n");

	return (0);
}
