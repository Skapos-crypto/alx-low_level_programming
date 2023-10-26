#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - Entry point
 * Description: Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if b is NULL or there's a non 0 or 1 char
 */
unsigned int binary_to_uint(const char *b)
{
	return ((int) strtol(b, NULL, 2));
}
