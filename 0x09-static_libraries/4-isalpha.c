#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_isalpha - lol
 *
 *@c : int
 *
 *Return: 0 or 1
 *
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
