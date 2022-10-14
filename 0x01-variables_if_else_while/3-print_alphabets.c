#include <stdio.h>
/**
  *main - entry point into the code
  *
  *Descsription: prints the alphabet in lowercase,and then
  *in uppercase, follwed by a new line
  *
  *Return: 0 upon success
  */
int main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(upper[i]);
	}

	putchar('\n');
	return (0);
}
