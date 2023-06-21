#include <ctype.h>
#include "main.h"
/**
 * print_sign - Entry point
 *@c: Character to be checked
 *
 * Description: 'print string value'
 *
 * Return: Always for success and 0 for false
 *
 */

int _putchar(char c);

int print_sign(int c)
{
	char str[] = "+-0";

	if (c > 0)
	{
		_putchar(str[0]);
		return (1);
	}
	if (c < 0)
	{
		_putchar(str[1]);
		return (-1);
	}
	_putchar(str[2]);
	return (0);
}




