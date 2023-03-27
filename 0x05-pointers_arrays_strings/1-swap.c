#include <stdlib.h>
#include <stdio.h>

/**
 *swap_int - swap
 *
 *@a : int
 *@b : int
 *
 *Returns: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
