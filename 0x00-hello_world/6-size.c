#include <stdio.h>
/**
  *main: entry point of the C program
  *Description: prints the size of various types on the computer it is compiled and run on
  *return: 0 upon success
  */
int main(void)
{
	printf("Size of a char: %d byte(s)", (int)sizeof(char));
	printf("Size of an int: %d byte(s)", (int)sizeof(int));
	printf("Size of a long int: %d byte(s)", (int)sizeof(long int));
	printf("Size of a long long int: %d byte(s)", (int)sizeof(long long int));
	printf("Size of a float: %d byte(s)", (int)sizeof(float));
	return (0);
}
