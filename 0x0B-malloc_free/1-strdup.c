#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - Main code
 *
 * @str: string
 *
 * Return: str
 */
char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *pstr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; '\0' != str[i]; i++)
	{
		size++;
	}
	pstr = (char *) malloc(sizeof(char) * size);
	pstr = str;
	return (pstr);
}
