#include "main.h"

/**
 * _strlen_recursion - function that returns length of a string
 * @s: string to check
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}
