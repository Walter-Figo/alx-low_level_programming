#include "main.h"
/**
 * _pow_recursion - functions that returns value of x to power of y
 * @x: base value
 * @y: power value
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
