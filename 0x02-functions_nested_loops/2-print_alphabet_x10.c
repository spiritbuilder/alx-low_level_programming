#include "main.h"
#include <string.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'print string value'
 *
 */


void print_alphabet_x10(void)
{
	char st[] = "abcdefghijklmnopqrstuvwxyz\n";
	size_t i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < strlen(st) ; i++)
		{
			_putchar(st[i]);
		}
	}
}




