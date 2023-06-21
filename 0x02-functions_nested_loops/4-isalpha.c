#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 *@c: Character to be checked
 *
 * Description: 'print string value'
 *
 * Return: Always for success and 0 for false
 *
 */


int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}




