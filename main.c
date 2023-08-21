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

	return (0);
}
