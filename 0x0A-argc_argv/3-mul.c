#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: arguement count
 * @argv: arguments
 *
 * Return: nothing.
 */
int main(int argc, char **argv)
{
	if (argc - 1 < 2)
	{
		(void)argv;
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));


	return (0);
}
