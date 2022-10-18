#include "main.h"

/**
  *_islower - entry point
  *
  *Description: checks for lowercase character
  *
  *Return: 0 upon success
  */

int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return result;
}
