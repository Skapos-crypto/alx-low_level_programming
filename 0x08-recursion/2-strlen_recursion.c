#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 *
 * Return: length of s
 *
 */
int _strlen_recursion(char *s)
{
	if (strlen(s) == 0)
	return (0);
	else
	return (strlen(s));
}
