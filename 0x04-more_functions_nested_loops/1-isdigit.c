#include "main.h"

/**
 * _isdigit - check if the character is a digit
 * @c: is a parameter to be checked
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
