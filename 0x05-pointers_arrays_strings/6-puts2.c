#include <unistd.h>
#include "main.h"
/**
 * puts2 - Prints every other character of a string followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Description: This function takes a pointer to a null-terminated string
 * as a parameter and prints every other character of the string,
 * starting with the first character, followed by a new line to the
 * standard output (stdout).
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i += 2;
	}
	write(1, "\n", 1);
}
