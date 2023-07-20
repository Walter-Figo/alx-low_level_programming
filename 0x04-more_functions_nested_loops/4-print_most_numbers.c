#include "main.h"
/**
 * print_most_numbers - Print the numbers 0 to 9 without 2 and 4.
 * Return: print the numbers.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (!(n == 50 || n == 52))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
