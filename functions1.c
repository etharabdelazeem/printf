#include <unistd.h>

/**
 * printc - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printc(char c)
{
	return (write(1, &c, 1));
}

/**
 * printd - print integers
 * @i: integer
 * Return: nothing
 */
int printd(int i)
{
	int count, return_value = 0, tens = 1, c, num;

	if (i < 0)
	{
		printc('-');
		(return_value)++;
		i *= -1;
	}
	count = no_of_digits(i);
	c = count - 1;
	while (c)
	{
		tens *= 10;
		c--;
	}
	while (count)
	{
		num = (i / tens) % 10;
		printc('0' + num);
		(return_value)++;
		tens /= 10;
		count--;
	}
	return (return_value);
}
