#include "main.h"
#include <string.h>
/**
 * main - Entry point
 *
 * Description: 'print string value'
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char st[] = "_putchar\n";
	size_t i;

	for (i = 0 ; i < strlen(st) ; i++)
	{
		_putchar(st[i]);
	}
	return (0);
}




