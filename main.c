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
	int i = 0;
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
	printf("%d\n", _printf("%x_x ", 54338)), printf("%x ", 54338);
	printf("%d\n", _printf("%X_X ", 54338)), printf("%X ", 54338);
	printf("%d\n", _printf("%o_o ", 54338)), printf("%o ", 54338);
	printf("%d\n", _printf("%u_u ", 54338)), printf("%u ", 54338);
	puts("Negative");
	printf("%d\n", _printf("%u_u ", -54338)), printf("%u ", -54338);
	printf("%d\n", _printf("%o_o ", -54338)), printf("%o ", -54338);
	printf("%d\n", _printf("%x_x ", -54338)), printf("%x ", -54338);
	printf("%d\n", _printf("%X_X ", -54338)), printf("%X ", -54338);
	puts("NULL");
	printf("%d\n", _printf("%o_o ", NULL)), printf("%o ", NULL);
	printf("%d\n", _printf("%X_X ", NULL)), printf("%X ", NULL);
	printf("%d\n", _printf("%x_x ", NULL)), printf("%x ", NULL);
	printf("%d\n", _printf("%u_u ", NULL)), printf("%u ", NULL);
	printf("%d\n", _printf("%p ", &i));
	printf("%d\n", _printf("%R", "string"));
	printf("%d\n", _printf("%r", "string"));
	printf("%d\n", _printf("%ld_ld ", 54338)), printf("%ld ", 54338);
	printf("%d\n", _printf("%hd_hd ", 54338)), printf("%hd ", 54338);
	printf("%d\n", _printf("%li_li ", 54338)), printf("%li ", 54338);
	printf("%d\n", _printf("%hi_hi ", 54338)), printf("%hi ", 54338);
	puts("unsigned");
	printf("%d\n", _printf("%lu_lu ", 555554338)), printf("%lu ", 555554338);
	printf("%d\n", _printf("%hu_hu ", 554338)), printf("%hu ", 554338);

	return (0);
}
