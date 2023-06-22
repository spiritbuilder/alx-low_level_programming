#include "main.h"
#include <ctype.h>
#include <stdbool.h>


/**
 * _isdigit - check if a variable is upper
 * @c: integer
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	bool val = isdigit(c);

	if (val)
	{
		return (1);
	}
	return (0);
}
