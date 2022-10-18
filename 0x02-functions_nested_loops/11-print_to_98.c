#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - entry point
 *
 *Description: prints all natural numbers from n
 *to 98, followed by a new line
 *
 *@n: number to start counting from
 *
 *Return: none
 */

void print_to_98(int n)
{
	int i;
	
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
}
