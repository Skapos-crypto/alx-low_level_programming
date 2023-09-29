#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to be printed
 *
 */
void _print_rev_recursion(char *s)
{
	if (strlen(s) == 0)
	return;
	else
	 _print_rev_recursion(s + 1);
	putchar(s[0]);
}
