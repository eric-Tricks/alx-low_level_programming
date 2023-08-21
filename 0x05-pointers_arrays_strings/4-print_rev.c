#include <unistd.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be printed in reverse
 *
 * Description: This function takes a pointer to a null-terminated string
 * as a parameter and prints the string in reverse followed by a new line
 * to the standard output (stdout).
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		write(1, &s[i], 1);
	}
	write(1, "\n", 1);
}
