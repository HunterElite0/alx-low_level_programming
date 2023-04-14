#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int i, j, size;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	ptr = (int *)malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = min, j = 0;
	while (i <= max)
	{
		ptr[j++] = i++;
	}

	return (ptr);
}
