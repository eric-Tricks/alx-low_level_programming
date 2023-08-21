#include "main.h"

/**
 * _strcpy - Copies a string from src to dest, including the null terminator
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination buffer
 *
 * Description: This function takes a pointer to a destination buffer and
 * a pointer to a source string as parameters. It copies the string from
 * source to destination, including the terminating null byte ('\0').
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
