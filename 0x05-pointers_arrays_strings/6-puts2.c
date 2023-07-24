#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *s = str;
	int b;

	while (*s != '\0')
	{
		s++;
		longi++;
	}
	a = longi - 1;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
