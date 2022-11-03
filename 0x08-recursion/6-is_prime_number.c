#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - funtion that says if number is a prime number
 * @n: the number to check
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if number is prime recursively
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is prime, 0 if it is not
 */
int actual_prime(int n, int i)
{
	if (i == i)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, n - 1));
}
