#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *print_sign - lol
 *
 *@n : int
 *
 *Return: 0 or 1
 *
*/
int print_sign(int n)
{
	if (n == 0)
		return (0);
	else if (n > 0)
		return (1);
	return (-1);
}
