#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - entry point into code
  *
  *Description: prints the last digit of the number stored in
  *the variable n
  *
  *Return: 0 upon success
  */


int main(void)
{
	int n, lastnum;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n%10;
	if (lastnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastnum);
	}
	else if (lastnum == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastnum);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastnum);
	}
	return (0);
}
