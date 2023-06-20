#include "main.h"
#include <string.h>
/**
 * print_alphabet - Entry point
 *
 * Description: 'print string value'
 *
 * Return: Always 0 (Success)
 */


int print_alphabet(void)
{
	char st[] = "abcdefghijklmnopqrstuvwxyz\n";
	size_t i;

	for (i = 0 ; i < strlen(st) ; i++)
	{
		_putchar(st[i]);
	}
	return (0);
}




