#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(argc, char argv[] __atrrubute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
