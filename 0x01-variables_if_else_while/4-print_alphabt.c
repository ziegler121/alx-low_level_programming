#include <stdio.h>
/**
  *main - entry point into code
  *
  *Description: prints the alphabet in lowercase, follwed by
  *a new line
  *
  *Return: 0 upon success
  */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alpha[i] == 'q' || alpha[i] == 'e')
		{
			continue;
		}
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
