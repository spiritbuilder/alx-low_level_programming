#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print string value'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;

	for (alpha = 48 ; alpha <= 57 ; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 97; alpha <= 102 ; alpha++)
	{
		putchar(alpha);
	}
	putchar(10);
	return (0);
}
