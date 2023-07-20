#include "main.h"
/**
 * print_numbers - Prints the numbers, from 0 t0 9, followed by a new line.
 * Return: Print on success.
 */
void print_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
