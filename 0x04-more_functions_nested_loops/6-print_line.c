#include "main.h"

/**
 * print_line - Draw a straight line on your terminal
 * @n: number of times the character _ should be printed
 * Return: empty
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
