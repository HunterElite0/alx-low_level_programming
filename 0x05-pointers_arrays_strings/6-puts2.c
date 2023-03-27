#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *puts2 - reverse string
 *
 *@str : string
 *
 *Return: void
*/

void puts2(char *str)
{
	int i;

	putchar(str[0]);
	for (i = 2; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
