#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: The number of arguments 
 * @av: Array of arguments
 * Return: Pointer to a new string, NULL otherwise.
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, len;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
