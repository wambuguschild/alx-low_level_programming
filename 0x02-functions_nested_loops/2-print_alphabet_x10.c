#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase 10 times
 */
void print_alphabet(void)
{
	char j;
	int n;

	for (j = 'a'; j <= 'z'; j++)
	{
		for (i = 0; i <= 10; i++)
			_putchar(j);
		_putchar('\n');
	}
}
