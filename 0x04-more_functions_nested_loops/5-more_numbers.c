#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints nums
 *
 *
*/
void print_most_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 15 ; j++)
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
