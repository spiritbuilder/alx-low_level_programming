#include "main.h"
#include <string.h>
/**
 * print_numbers - print numbers
 *
 */

void print_numbers(void)
{
	char c[] = "0123456789\n";
	size_t i;

	for (i =  0; i < strlen(c) ; i++)
	{
		_putchar(c[i]);
	}
}
