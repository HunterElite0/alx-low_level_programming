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

	for (i = 0; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
