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
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > 0; j--)
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
		_putchar('\n);
}
