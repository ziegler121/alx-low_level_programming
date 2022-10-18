#include "main.h"

/**
 *print_sign - entry point
 *
 *Description: prints the sign of a number
 *
 *@n: number to check
 *
 *Return: 1 if number is greater than 0,
 *0 if number is zero and 
 *-1 if number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		return (-1);
	}

}
