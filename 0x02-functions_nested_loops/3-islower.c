#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 *@c: Character to be checked
 *
 * Description: 'print string value'
 *
 * Return: Always for success and 0 for false
 *
 */


int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}




