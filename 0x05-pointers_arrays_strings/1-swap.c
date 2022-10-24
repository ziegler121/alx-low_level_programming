#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: first number to swap
 *@b: second number to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
