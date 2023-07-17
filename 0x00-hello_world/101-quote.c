#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
/**
 * main - Entry
 * Return: Always 1 (Success)
 */
int main(void)
{
	char buffer[1024] =
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, &buffer, strlen(buffer));
	return (1);
}
