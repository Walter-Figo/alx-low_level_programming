#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: the character to print
 * Return: Pointer to an array, NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		s[a] = c;
	return (s);
}
