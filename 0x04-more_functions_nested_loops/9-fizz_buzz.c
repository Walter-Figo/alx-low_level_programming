#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print 1 to 100.
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 0)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}

	}
	printf("\n");
	return (0);
}
