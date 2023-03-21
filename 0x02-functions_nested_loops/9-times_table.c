#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *times_table - lol
 *
 *
 *
 *Return: 0 or 1
 *
*/
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x <= 9 && j != 9)
			{
				printf("%d,  ", x);
			}
			else if(j != 9)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d", x);
			}
			if (j == 9)
				printf("\n");
		}
	}
}
