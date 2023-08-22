#include "main.h"

/**
 * check - checks the letter after %
 * @ch: pointer to function
 * @index: location of ch in the array format
 * Return: pointer to function
 */
int (*check(const char *ch, int index))(va_list list)
{
	int i = 0, j = 0, first_index;
	fun functions[] = {
		{"c", printc}, {"s", prints},
		{"d", printd}, {"i", printd},
		{"b", printb}, {"u", printu},
		{"o", printo}, {"x", printhex},
		{"X", printHEX}, {"S", printS},
		{"+u", printu}, {"+X", printHEX},
		{"+o", printo}, {"+x", printhex},
		{" u", printu}, {" X", printHEX},
		{" o", printo}, {" x", printhex},
		{"#i", printd}, {"#d", printd},
		{"#u", printu}, {"p", printp},
		{NULL, NULL}
	};

	first_index = index;
	while (functions[i].ch)
	{
		if (ch[index] == functions[i].ch[j])
		{
			if (functions[i].ch[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0, i++, index = first_index;
		}
	}
	return (functions[i].f);
}
