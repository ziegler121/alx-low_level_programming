#include "main.h"

/**
 *rev_string - reversese a string
 *@s: the string to reverse
 */

void rev_string(char *s)
{
	char tmp;

	int i, len1, len2;

	while (s[len1] != '\0')
	{
		len1++;
	}

	len2 = len1 - 1;

	for (i = 0; i < len1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2--] = tmp;
	}

}
