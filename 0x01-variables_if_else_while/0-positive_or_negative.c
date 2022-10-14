#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
  *main - entry point into the entire program
  *
  *Description: prints whether the number stored in the variable n
  *is positive or negative
  *
  *Return: 0 upon success
  */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else
	{
		printf("%d is negative\n");
	}

	return (0);
}
