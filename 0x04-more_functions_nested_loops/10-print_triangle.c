#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size : int
 *
*/
void print_triangle(int size)
{
	int i, j, k;

	for (; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
