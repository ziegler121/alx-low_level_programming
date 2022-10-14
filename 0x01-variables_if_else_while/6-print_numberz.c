#include <stdio.h>
/**
  *main - entry point into code
  *
  *Description: prints all single digit numbers of base 10
  *starting from 0 followed by a new line
  *
  *Return: 0 upon success
  */
int main(void)
{
	int nums[10] = [0,1,2,3,4,5,6,7,8,9];
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(nums[i]);
	}
	putchar('\n');
	return (0);
}
