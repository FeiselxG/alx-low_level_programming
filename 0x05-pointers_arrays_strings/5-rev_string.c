#include "main.h"
#include <string.h>

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, j;
	char *a;

	c = strlen(a) ;
	j = c;
	
	for (i = 0; i < c; i++)
	{
		a[i] = s[j];
		j--;
	}
}
