#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	char hex_digits[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hex_digits[i]);
	}
	putchar('\n');
	return (0);
}
