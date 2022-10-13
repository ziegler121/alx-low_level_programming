#include <stdio.h>
#include <unistd.h>
/**
  *main - entry point to entire program
  *Description: prints a string without using
  *printf or puts
  *Return: 1 upon success
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
