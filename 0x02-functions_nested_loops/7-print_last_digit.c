#include "main.h"

/**
 *print_last_digit - entry point
 *
 *Description: prints the last digit of
 *a number
 *@n: number to work on
 *
 *Return: last digit of number
 */

int print_last_digit(int n)
{
	int last_num;

	if (n < 0)
	{
		n = n * -1;
	}

	last_num = n % 10;

	_putchar('0' + last_num);
	return (last_num);
}
