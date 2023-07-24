#include "main.h"
/**
 * print_rev - prints the string in reverse.
 * @s: string.
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int x;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (x = longi; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
