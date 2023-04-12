#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Main code
 *
 * @s1: string
 * @s2: string
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	int i;
	char *pstr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; '\0' != s1[i]; i++)
	{
		size1++;
	}
	for (i = 0; '\0' != s2[i]; i++)
	{
		size2++;
	}
	pstr = (char *) malloc(sizeof(char) * (size1 + size2));
	if (pstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size1); i++)
	{
		pstr[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		pstr[i+size1-1] = s2[i];
	}
	
	
	return (pstr);
}
