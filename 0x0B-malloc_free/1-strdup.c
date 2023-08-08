#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of string str.
 * @str: duplicate string to be copied.
 * Return: A pointer to the duplicate string.
 * NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *s;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] !='\0')
		a++;

	s = malloc(sizeof(char) * (a + 1));

	if (s == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		s[b] = str[b];

	return (s);
}
