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
	char lowercase;

	for (alpha = 97 ; alpha <= 122 ; alpha++)
	{
		putchar(alpha);
	}
	for (lowercase = 65 ; lowercase <= 90 ; lowercase++)
	{
		putchar(lowercase);
	}
	putchar(10);
	return (0);
}
