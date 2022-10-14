#include <stdio.h>
/**
  *main - entry point into code
  *
  *Description: prints the alphabet in lowercase, followed
  *by a new line using putchar function only twice
  *
  *Return: 0 upon success
  */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
