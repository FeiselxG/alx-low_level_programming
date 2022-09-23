#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, j;
	char *a, aux;

	a = s;
	c = 0;
	j = 0;

	while (s[c] != '\0')
	{
		c++;
		j++;
	}

	for (i = 0; i < c; i++)
	{
		a[i] = s[j];
		j--;
	}
	s=a;
}
