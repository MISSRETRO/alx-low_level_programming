#include "main.h"

/**
 * string_toupper - change all lower case to upper
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}