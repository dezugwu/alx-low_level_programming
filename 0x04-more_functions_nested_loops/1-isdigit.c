#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @y: The number to be checked
 * Return: 1 for character that will be a digit or 0 for any other digit
 */

int _isdigit(int y)
{
	if (y >= 48 && y <= 57)
	{
		return (1);
	}
	return (0);
}
