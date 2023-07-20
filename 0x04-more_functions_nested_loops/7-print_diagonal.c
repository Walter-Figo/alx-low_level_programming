#include "main.h"
/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: The number of time \ should be printed
 * Return: empty
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == a)
				_putchar('\\');
				else if (b < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
