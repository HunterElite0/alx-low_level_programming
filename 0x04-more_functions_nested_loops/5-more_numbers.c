#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints nums
 *
 *
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 15 ; j++)
		{
			if (j > 9)
			{
				int x = (j % 10) + 48;

				_putchar('1');
				_putchar(x);
			}
			else
			{
				_putchar(i + 48);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
