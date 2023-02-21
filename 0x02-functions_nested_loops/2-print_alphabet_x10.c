#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int ten;
	char sl;

	for (ten = 0; ten <= 9; ten++)
	{
		for (sl = 'a'; sl <= 'z'; sl++)
			_putchar(sl);
		_putchar('\n');
	}
}
