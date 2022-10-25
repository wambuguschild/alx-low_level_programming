#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;
	for (j = j - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
