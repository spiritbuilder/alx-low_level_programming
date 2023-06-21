#include "main.h"
/**
 * print_to_98 - writes the character c to stdout
 * @b: stating number
 *
 */
void print_to_98(int b)
{
	int c = b;

	if (c <= 98)
	{
		for (c = b; c < 99 ; c++)
		{
			printf("%d", c);
			c == 98 ? printf("\n") : printf(", ");
		}
	} else
	{
		for (c = b; c > 97 ; c--)
		{
			printf("%d", c);
			c == 98 ? printf("\n") : printf(", ");
		}
	}
}
