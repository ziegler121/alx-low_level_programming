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
	int last_num = n % 10;

	_putchar(last_num);
	return (last_num);
}
