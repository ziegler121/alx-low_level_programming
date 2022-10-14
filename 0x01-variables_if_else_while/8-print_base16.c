#include <stdio.h>
/**
  *main - entry point into code
  *
  *Description: prints all the numbers in base 16
  *in lowercase followed by a new line
  *
  *Return: 0 upon success
  */
int main(void)
{
	char nums[] = "0123456789";
	char letters[] = "abcdef";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(nums[i]);
	}

	for (i = 0; i < 6; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
