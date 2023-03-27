#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *print_array - prints array
 *
 *@a : int
 *@n : int
 *
 *Return: void
*/

void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
}
