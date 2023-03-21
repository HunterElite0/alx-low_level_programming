#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *jack_bauer - lol
 *
 *
 *
 *Return: 0 or 1
 *
*/
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (j < 10 && i < 10)
				printf("0%d:0%d\n", i, j);
			else if (j < 10)
				printf("%d:0%d\n", i, j);
			else if (i < 10)
				printf("0%d:%d\n", i, j);
			else
				printf("%d:%d\n", i, j);
		}
	}
}
