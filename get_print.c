#include "main.h"

/**
 * check - checks the letter after %
 * @ch: pointer to function
 * Return: pointer to function
 */
int (*check(char ch))(va_list list)
{
	int i = 0;

	fun functions[] = {
		{'c', printc}, {'s', prints},
		{'d', printd}, {'i', printd}, {'b', printb},
		{'u', printu}, {'o', printo},
		{'x', printhex}, {'X', printHEX},
		{'\0', NULL}
	};

	while (functions[i].ch)
	{
		if (ch == functions[i].ch)
		{
			break;
		}
		i++;
	}
	return (functions[i].f);
}
