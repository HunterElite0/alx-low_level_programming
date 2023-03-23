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
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
