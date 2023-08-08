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
	int a, b, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (len = 0; av[a][len] != '\0'; len++)

		total_len += len;
	}
	total_len += ac + 1;

	str = malloc(sizeof(char) * total_len);

	if (str == NULL)
		return (NULL);

	len = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[len] = av[a][b];
			len++;
			}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';
	return (str);
}
