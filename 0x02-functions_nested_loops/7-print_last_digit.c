#include <stdlib.h>


/**
 * print_last_digit - Entry point
 *@c: Character to be checked
 *
 * Description: 'print string value'
 *
 * Return: Always for success and 0 for false
 *
 */
int _putchar(int c);
int print_last_digit(int c)
{
	int rem = c % 10;

	_putchar((char)(48 + abs(rem)));
	return (abs(rem));
}




