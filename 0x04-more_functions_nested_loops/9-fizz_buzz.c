#include <stdio.h>

/**
 * main - prints fizzbuzz
 * but for multiples of three prints fizz
 * and for multiples of five prints buzz
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (num == 100)
			printf("Buzz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
