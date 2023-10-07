#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print number of arguments
 *
 * @argc: argument count
 * @argv: nothing
 *
 * Description: printing number of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	return (printf("%i\n", argc));
	}
}
