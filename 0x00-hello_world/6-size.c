#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'print a string'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int myint;
	char mychar;
	long int mylongint;
	long long int mylonglongint;
	float myfloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(mychar));
	printf("Size of an int: %zu byte(s)\n", sizeof(myint));
	printf("Size of a long int: %zu byte(s)\n", sizeof(mylongint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(mylonglongint));
	printf("Size of a float: %zu byte(s)\n", sizeof(myfloat));
	return (0);
}
