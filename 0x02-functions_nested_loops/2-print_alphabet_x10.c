#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet
 *
 *Return: alphabet
 *
*/
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (i = 97; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
