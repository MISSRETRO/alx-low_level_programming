#include "main.h"

/**
 * _puts - prints string followed by line
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
