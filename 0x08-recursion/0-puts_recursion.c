#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	return;
	else
	putchar(s[0]);
	 _puts_recursion(s + 1);
	putchar('\n');
}
