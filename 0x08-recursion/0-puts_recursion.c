#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
	putchar('\n');
	return;
	}
	else
	putchar(s[0]);
	 _puts_recursion(s + 1);
}
