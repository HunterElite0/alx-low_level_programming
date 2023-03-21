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
	int l = (n % 10);

	_putchar(l);
	return (n % 10);
}
