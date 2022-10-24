#include "main.h"

/**
 *_strcpy - copies the string pointed to by src, including the
 *terminating null bytel to the buffer pointed to by desk
 *@dest: pointer to destination
 *@src: source string to copy
 */

char *_strcpy(char *dest, char *src)
{

	int j, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{	
		dest[j] = src[j];
	}
	dest[j] =  '\0';

	return (result);

}
