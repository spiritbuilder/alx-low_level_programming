#include "main.h"
#include <string.h>
/**
 * print_diagonal - print numbers
 *@c: number of times
 *
 */

void print_diagonal(int c)
{
	int i;
	int k;

	if (c > 0)
	{
		for (k = 0; k < c ; k++)
		{
			for (i =  0 ; i < k ; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
