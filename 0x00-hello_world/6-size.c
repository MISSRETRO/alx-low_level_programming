#include <stdio.h>
/**
 * main - A program that prints size of various computer types
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu", sizeof(a));
	printf("Size of a int: %lu", sizeof(b));
	printf("Size of a long int: %lu", sizeof(c));
	printf("Size of a long long int: %lu", sizeof(d));
	printf("Size of a float: %lu," sizeof(e));
	return (0);
}
