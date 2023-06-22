#include "main.h"
#include <string.h>
/**
 * more_numbers - print numbers
 *
 */

void more_numbers(void)
{
	int c;
	int j;
	int x = 0;


	for (j = 0 ; j < 11 ; j++)
	{

		for (c =  0; c < 15 ; c++)
		{


			if (c > 9)
			{
				x = c / 10;
				_putchar((char)(x + 48));
			}

			_putchar((char)((c % 10)+48));
		}
		_putchar('\n');
	}
}
