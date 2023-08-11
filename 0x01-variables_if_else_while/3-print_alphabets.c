#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char letter_large = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letter_large <= 'Z')
	{
		putchar(letter_large);
		letter_large++;
	}

	putchar('\n');

	return (0);
}
