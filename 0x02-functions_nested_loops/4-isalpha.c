#include "main.h"

/**
 *_isalpha - entry point
 *
 *Description: checks for alphabetic character
 *
 *@c: the character to check
 *
 *Return: 1 if c is a letter
 *(either lowercase or uppercase), 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

