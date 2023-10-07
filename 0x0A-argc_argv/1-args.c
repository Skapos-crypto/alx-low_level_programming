#include <stdio.h>
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
int main(int argc, char *argv[] __attribute__((unused)))
{
	(printf("%i\n", argc - 1));
	return (0);
}
