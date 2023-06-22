#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: return 0 always
 */

int main(void)
{
	int i;

	for (i =  1; i < 101 ; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
			continue;
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	return (0);
}
