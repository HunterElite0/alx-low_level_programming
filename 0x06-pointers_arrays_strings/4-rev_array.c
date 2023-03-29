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
	n--;

	for (i = 0; i < n/2; i++)
	{
		int temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
