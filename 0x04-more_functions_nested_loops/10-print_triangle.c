#include "main.h"
#include <string.h>
/**
 * print_triangle - print numbers
 *@c: number of times
 *
 */

void print_triangle(int c)
{
	int i;
	int k;
	int m;

	if (c > 0)
	{
		for (k = 0; k < c ; k++)
		{
			for (i =  0 ; i < c - k - 1 ; i++)
			{
				_putchar(' ');
			}
			for (m = 0; m < k + 1 ; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
