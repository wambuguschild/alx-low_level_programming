#include <unistd.h>
#include "main.h"

/**
 * main - prints the word _putchar follwed by a new line
 * Return: is always 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(word[8]);
	_putchar("\n");

	return (0);
}
