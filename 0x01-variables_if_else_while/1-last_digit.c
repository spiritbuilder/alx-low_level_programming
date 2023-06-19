#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'print string value'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	mod = n % 10;
	if (mod > 0)
	{
		printf("Last digit of %d is %d and is", n, mod);
		printf(" greater than 5\n");
	}
	else
		if ((mod < 6) && (mod != 0))
		{
			printf("Last digit of %d is %d ", n, mod);
			printf("and is less than 6 and not 0\n");
		}
		else
			printf("Last digit of %d is %d and is 0\n", n, mod);
	return (0);
}
