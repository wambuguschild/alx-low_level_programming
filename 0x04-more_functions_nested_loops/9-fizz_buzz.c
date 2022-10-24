#include <stdio.h>

/**
 * main - prints FizzBuzz
 * Return: 0
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", a);
	}
	printf("Buzz\n");
	return (0);
}
