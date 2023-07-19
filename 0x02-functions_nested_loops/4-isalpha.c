#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * 0c: The character to be checked
 * Return: 1 for alphabetic charecter or 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}