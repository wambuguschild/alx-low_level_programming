#include <stdio.h>

/**
 * main - program that prints from 1 to 100
 * followed by new line
 * multiples of 3 prints Fizz
 * multiples of 5 prints Buzz
 * multiples of 3 and 5 prints FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	printf("1")
	for (i = 2; i <= 100; i++)
	{
		printf(" ");
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 5 == 0)
			printf("Buzz");
		if
			(i % 3 != 0 && i % 5 != 0)
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
