#include <stdio.h>
/**
  *main - entry point into code
  *
  *Description: prints all single digit numbers of base
  *10 starting from 0 followed by a new line
  *
  *Return: 0 upon success
  */
int main(void)
{
	char nums[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(nums[i]);
	}
	putchar('\n');
	return (0);
}
