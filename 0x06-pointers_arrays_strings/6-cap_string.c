#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 *cap_string - uppercase
 *
 *@a : string
 *
 *Return: string
*/
char *cap_string(char *a)
{
	int i;
	int size = strlen(a);

	if (size > 0)
	{
		a[0] = toupper(a[0]);
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i - 1] == ' ')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == '\t')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == '\n')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == ',')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == ';')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == '.')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == '!')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == '?')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == '"')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == '(')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == ')')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == '{')
				a[i] = toupper(a[i]);
			else if (a[i - 1] == '}')
				a[i] = toupper(a[i]);
		}
	}
	return (a);
}
