#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: first integer.
 * @b: second integer.
 * Result: Prints the value of the new integers.
 */
void swap_int(int *a, int *b)
{
	int digit = 0;

	digit = *a;
	*a = *b;
	*b = digit;
}
