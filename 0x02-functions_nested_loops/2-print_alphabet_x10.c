#include "main.h"

/**
  *print_alphabet_x10 - entry point
  *
  *Return: 0 upon success
  */

void print_alphabet_x10(void)
{
	char c, i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
