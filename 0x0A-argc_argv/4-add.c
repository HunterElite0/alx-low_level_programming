#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if the string passed is all digits
 * @str: string to check
 *
 * Return: 0 if fail, 1 if success
 */
int is_number(char *str)
{
	while (*str != '\0')
	{
		if (*str > 57 || *str < 48)
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of args passed
 * @argv: array of args passed
 *
 * Return: 0 if success, 1 if passed parameters are not +ve numbers
 */
int main(int argc, char **argv)
{
	int count, result;

	result = 0;
	if (argc > 1)
		for (count = 1; count < argc; count++)
		{
			if (is_number(argv[count]) == 1)
				result += atoi(argv[count]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", result);
	return (0);
}
