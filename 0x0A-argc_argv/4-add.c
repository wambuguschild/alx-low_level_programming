#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * main - program that adds two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: if no number is passed to program, print 0.
 * If one of the numbers contains non digits, print Error.
 * Return: 1 if Error, 0 if successful.
 */
int main(int argc, char *argv[])
{
	int total, i, j;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		total += num;
	}
	printf("%d\n", total);
	return (0);
}
