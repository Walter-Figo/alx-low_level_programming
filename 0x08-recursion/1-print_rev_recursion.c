#include "main.h"
/**
 * _print_rev_recursion - a function
 * @s: input value
 * Return: always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
