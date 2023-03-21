#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - prints alphabet
 *
 *Return: alphabet
 *
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
