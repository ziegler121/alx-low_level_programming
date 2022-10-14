#include <stdio.h>
/**
  *main - entry point into code
  *
  *Desctiption: prints the lowercase alphabet in reverse
  *followed by a new line
  *
  */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
