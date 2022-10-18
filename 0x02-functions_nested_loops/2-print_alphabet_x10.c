#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase 10 times
 */
void print_alphabet(void)
{
	char j;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);


		_putchar('\n');
	}
}
