#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *reverse_array - reverse
 *
 *@a : array
 *@n : size
 *
 *Return: void
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		a[n - i - 1] = a[i];
	}
}
