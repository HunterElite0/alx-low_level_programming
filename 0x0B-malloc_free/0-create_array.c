#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array and fills it with char
 *
 * @size: array size
 * @c: char
 *
 * Return: arr
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(sizeof(char) * size);
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
