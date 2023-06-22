#include "main.h"
#include <ctype.h>
#include <stdbool.h>


/**
 * _isupper - check if a variable is upper
 * @c: integer
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	bool val = isupper(c);

	if (val)
	{
		return (1);
	}
	return (0);
}
