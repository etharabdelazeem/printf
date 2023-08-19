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
	printf("%d\n",_printf("something\n"));
	_printf("an other thing %c heheehe\n", 'o');
	printf("%d\n",_printf("an other thing %c heheehe\n", 'o'));
	_printf("Let'%c ma%ce %c pu%c%cle\n", 's', 'k', 'a', z, z);
<<<<<<< HEAD
	printf("%d\n",_printf("Let'%c ma%ce %c pu%c%cle\n", 's', 'k', 'a', z, z));
	_printf("Strin%c %s %s\n", 'g', "this", "I thought It was my code, it turned out to be me");
	printf("%d\n",_printf("Strin%c %s %s\n", 'g', "this", "I thought It was my code, it turned out to be me"));
=======
	_printf("Strin%c %s %s\n", 'g', "this", str);
>>>>>>> 87ba8355f7adf34e81688e7733fa166a475686f8
	_printf("o\"\'\\% %% \n %i %d\n");
	printf("%d\n",_printf("o\"\'\\% %% \n %i %d\n"));

	return (0);
}
