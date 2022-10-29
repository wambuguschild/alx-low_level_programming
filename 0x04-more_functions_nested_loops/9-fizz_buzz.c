#include <stdio.h>

/**
 * main - program that prints numbers from 1 to 100
 * followed by a new line
 * but for multiples of three prints Fizz instead of number
 * and for multiples of five prints Buzz instead of number
 * and for multiples of three and five print FizzBuzz instead of number
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
