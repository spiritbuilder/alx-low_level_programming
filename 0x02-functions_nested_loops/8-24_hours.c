#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * jack_bauer - print time
 *
 */



void jack_bauer(void)
{
	char c[] = "00:00";
	int _h = 0;
	int _hh = 0;
	int _m = 0;
	int _mm = 0;

	iterator(c, _h, _hh, _m, _mm);
}



/**
 * iterator - iterates condition
 * @c: The character to print
 * @_h: The character to print
 * @_hh: The character to print
 * @_m: The character to print
 * @_mm: The character to print
 */

void iterator(char *c, int _h, int _hh, int _m, int _mm)
{
	while (_h < 3 && _hh < 10 && _m < 6 && _mm < 10)
	{
		c[0] = (char)(_h + 48);
		c[1] = (char)(_hh + 48);
		c[3] = (char)(_m + 48);
		c[4] = (char)(_mm + 48);
		if (_mm == 9)
		{
			_mm = 0;
			if (_m == 5)
			{
				_m = 0;
				if (_hh == 3 && _h == 2)
				{
					print_time(c);
					break;
				}
				if (_hh == 9 && _h < 2)
				{
					_hh = 0;
					_h++;
				} else
				{
					_hh++;
				}
			} else
			{
				_m++;
			}
		} else
		{
			_mm++;
		}
		print_time(c);
	}
}


/**
 * print_time - print string
 * @c: actuaal string
 *
 * Return: Always return 0.
 *
 */

int print_time(char *c)
{
	size_t i;

	for (i = 0; i < strlen(c) ; i++)
	{
		_putchar(c[i]);
	}
	_putchar("\n"[0]);
	return (0);
}


