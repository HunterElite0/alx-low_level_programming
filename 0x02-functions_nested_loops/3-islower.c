#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_islower - lol
 *
 *@c : int
 *
 *Return: 0 or 1
 *
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
