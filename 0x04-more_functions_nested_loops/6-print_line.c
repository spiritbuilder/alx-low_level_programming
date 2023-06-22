#include "main.h"
#include <string.h>
/**
 * print_line - print numbers
 *@c: number of times
 *
 */

void print_line(int c)
{
	int i;

	if (c > 0)
	{
		for (i =  0; i < c ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
