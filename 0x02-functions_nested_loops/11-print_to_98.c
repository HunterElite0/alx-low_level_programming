#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - lol
 *
 *@n : int
 *
 *
 *Return: 0 or 1
 *
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%i, ", n++);
	}
	else
	{
		while (n > 98)
			printf("%i, ", n--);
	}
	printf("98\n");
}
