#include "main.h"

/**
 *_abs - entry point
 *
 *Description: computes the absolute value of
 *an integer
 *
 *@n: number to work on
 *
 *Return: the absolute value of the number n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1*n);
	}
	return (n);
}
