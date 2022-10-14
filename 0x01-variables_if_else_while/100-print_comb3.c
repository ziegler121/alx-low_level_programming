#include <stdio.h>
/**
  *main - entry point into entire code
  *
  *Description: prints all possible different combinations
  *of two digits
  *
  *Return: 0 upon success
  */
int main(void)
{
	int a, b;

	a = 48;
	b = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == 56 && b == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
