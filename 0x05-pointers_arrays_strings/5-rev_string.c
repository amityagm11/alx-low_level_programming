#include "main.h"
/**
 * rev_string - rev
 * @s: jjjj
 * Return:0
 */
void rev_string(char *s)
{
	int len, half;
	int i;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		i = 0;
		half = len / 2;
	}
	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
