#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - lol
 *
 *@n : int
 *
 *Return: 0 or 1
 *
*/
int print_last_digit(int n)
{
	int p = abs(n % 10);

	_putchar(p + 48);
	return (p);
}
