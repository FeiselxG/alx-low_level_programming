#include <stdio.h>
/**
 *main - main block
 *Description: Use `putchar` function to print the alphabet in lowercase.
 *Return: 0
 */
int main(void)
{
	char chlower = 'a';

	while (chlower <= 'z')
		{
			putchar(chlower);
			chlower++;
		}
	putchar('\n');

	return (0);
}
