#include <stdio.h>
#include "main.h"

/**
 *_isdigit - check if upper
 *
 *@c : int
 *
 *Return: 0 or 1
 *
*/
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
