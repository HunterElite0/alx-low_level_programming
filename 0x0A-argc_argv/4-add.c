#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * @argc: arguement count
 * @argv: arguments
 *
 * Return: nothing.
 */
int main(int argc, char **argv)
{
	int i;
	int result = 0;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%d\n", atoi(argv[i]));
			if (atoi(argv[i]) != 0)
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", result);

	return (0);
}
