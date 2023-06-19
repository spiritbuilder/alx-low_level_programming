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
	char alpha;

	for (alpha = 97 ; alpha <= 122 ; alpha++)
	{
		putchar(alpha);
	}
	putchar(10);
	return (0);
}
