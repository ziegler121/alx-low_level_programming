#include <stdio.h>
/**
  *main - starting point of major code
  *
  *Description: prints all possible different combinations
  *of three digits
  *
  *Return: 0 upon success
  */
int main(void)
{
	int a, b, c;

	a = 48;
	b = 48;
	c = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a < b && a < c && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == 55 && b == 56 && c == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);

}
