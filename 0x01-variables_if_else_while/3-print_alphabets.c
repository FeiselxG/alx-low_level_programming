#include <stdio.h>
/**
 *main - main block
 *Description: Use `putchar` to print lowercase and then uppercase alphabet.
 *Return: 0
 */
int main(void)
{
	char chLowerUpper = 'a';

	while (chLowerUpper <= 'z')
	{
		putchar(chLowerUpper);
		chLowerUpper++;
	}

	chLowerUpper = 'A';
	while (chLowerUpper <= 'Z')
	{
		putchar(chLowerUpper);
		chLowerUpper++;
	}

	putchar('\n');

	return (0);
}
