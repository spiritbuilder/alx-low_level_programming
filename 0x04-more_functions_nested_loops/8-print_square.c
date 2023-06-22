#include "main.h"
#include <string.h>
/**
 * print_square - print numbers
 *@c: number of times
 *
 */

void print_square(int c)
{
	int i;
	int k;

	if (c > 0)
	{
		for (k = 0; k < c ; k++)
		{
			for (i =  0 ; i < c ; i++)
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
