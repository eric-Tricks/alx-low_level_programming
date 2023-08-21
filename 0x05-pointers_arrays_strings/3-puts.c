#include <unistd.h>
#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to the string to be printed
 *
 * Description: This function takes a pointer to a null-terminated string
 * as a parameter and prints the string followed by a new line to the standard
 * output (stdout).
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
