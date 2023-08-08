#include <stdlib.h>
#include "main.h"
/**
 * count_word - counts the number of words in a string
 * @s: The string to be evaluated.
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}
	return (b);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: Pointer to an array of strings, NULL otherwise
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, z = 0, words, e = 0, start, end;

	while (*(str + z))
		z++;

	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x < z; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (e)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (e + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - e;
				y++;
				e = 0;
			}
		}
		else if (e++ == 0)
			start = x;
	}
	matrix[y] = NULL;

	return (matrix);
}
