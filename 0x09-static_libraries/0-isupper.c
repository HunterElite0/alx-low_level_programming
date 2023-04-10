#include <stdio.h>
#include "main.h"

/**
 *_isupper - check if upper
 *
 *@c : int
 *
 *Return: 0 or 1
 *
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
