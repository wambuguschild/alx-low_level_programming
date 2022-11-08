#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if sucessful, 1 if error
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
