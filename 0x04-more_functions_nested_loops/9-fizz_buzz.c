#include <stdio.h>
#include "main.h"

/**
 *main - entry point into entire program
 *
 *Description: prints the numbers from 1 to 100, followed by
 *a new line. For multiples of 3, print Fizz instead of the number
 *For multiples of 5, print Buzz. For numbers which ar multiples of
 *both 3 and 5, print FizzBuzz
 *Return: 0 upon success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i == 1)
		{
			printf("%d ", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
