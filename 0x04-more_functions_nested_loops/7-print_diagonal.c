#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints line
 *
 * @n : int
 *
*/
void print_diagonal(int n)
{
	int i;

	if(n < 0)
		_putchar('\n);
	else
	{
		for (i = 0; i < n ; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
