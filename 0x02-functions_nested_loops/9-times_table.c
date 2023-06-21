#include "main.h"
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>




/**
 * times_table - prints time table
 *
 * Return: return char string
 */


void times_table(void)
{
	int i;
	int j;
	char mm[7] = ",";

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int k = i * j;
			char *yy = convert(k);

			if (j == 0)
			{
				char *n  = ",";
				char *m = convert(k);

				print(m, n);
			} else if (j == 9)
			{
				char w[7] = " ";
				char v[7] = "  ";

				strcat(yy, "\n");
				k > 9 ? print(w, yy) : print(v, yy);
			} else if (k <= 9)
			{
				char ds[7] = "  ";

				strcat(yy, mm);
				print(ds, yy);
			} else
			{
				char s[7] = " ";

				strcat(yy, mm);
				print(s, yy);
			}
		}
	}
}

/**
 * convert - writes the character c to stdout
 * @c: The character to convert
 *
 * Return: return char string
 */

char *convert(int c)
{
	int y = 0;
	int x = 0;
	char *str;

	y = c % 10;
	if (c >= 10)
	{
		x = floor(c / 10);
		str = (char *)malloc((3) * sizeof(char));
		str[0] = (char)(x + 48);
		str[1] = (char)(y + 48);
	} else
	{
		str = (char *)malloc((2) * sizeof(char));
		str[0] = (char)(y + 48);
	}
	return (str);
}

/**
 * print - writes the character c to stdout
 * @c: The character to print
 * @d: The character to print
 *
 */

void print(char *c, char *d)
{
	size_t i;

	strcat(c, d);
	for (i = 0; i < strlen(c); i++)
	{
		_putchar(c[i]);
	}
}

