#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 *leet - uppercase
 *
 *@a : string
 *
 *Return: string
*/
char *leet(char *a)
{
	int i;
	int j;

	char encode[5] = {'a', 'e', 'o', 't', 'l'};
	char decode[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (encode[j] == tolower(a[i]))
			{
				a[i] = decode[j];
			}
		}
	}
	return (a);
}
