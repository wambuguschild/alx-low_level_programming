#include <stdio.h>
#include "main.h"

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
