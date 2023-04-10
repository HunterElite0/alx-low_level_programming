#include <stdio.h>

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

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}

	return (0);
}
