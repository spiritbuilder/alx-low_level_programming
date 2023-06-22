#include "main.h"
#include <string.h>
/**
 * print_most_numbers - print numbers
 *
 */

void print_most_numbers(void)
{
	char c[] = "0123456789\n";
	size_t i;

	for (i =  0; i < strlen(c) ; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(c[i]);
		}
	}
}
