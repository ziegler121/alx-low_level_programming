#include <stdio.h>
/**
  *main - entry point into code
  *
  *Description: prints all possible combinations of single
  *-digit numbers
  *
  *Return: 0 upon success
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
