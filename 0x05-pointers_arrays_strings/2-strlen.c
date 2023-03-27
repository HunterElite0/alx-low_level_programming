#include <stdlib.h>
#include <stdio.h>

/**
 *_strlen - len of char array
 *
 *@s : string
 *
 *Returns: size
*/

int _strlen(char *s)
{
	return sizeof(s)/sizeof(int) + 1;
}
