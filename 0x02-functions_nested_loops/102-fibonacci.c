#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	int a = 0;
	long i = 1, j = 2;

	while (a < 50)
	{
		if  (a == 0)
			printf("%ld", i);
		else if (a == 1)
			printf(", %ld", j);
		else
		{
			j += i;
			i = j - i;
			printf(", %ld", j);
		}
		++a;
	}
	printf("\n");
	return (0);
}
