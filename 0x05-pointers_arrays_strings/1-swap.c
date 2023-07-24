#include <stdio.h>

/**
 * swap_int - Swaps value of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 * Return: nothing(0)
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
