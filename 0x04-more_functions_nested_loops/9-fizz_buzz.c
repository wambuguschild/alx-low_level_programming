#include <stdio.h>

/**
 * main - prints FizzBuzz
 * multiples of 3 prints Fizz
 * multiples of 5 prints Buzz
 * multiples of 3 and 5 prints FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
