#include <stdio.h>
#include "main.h"
/**
 * main - print all arguments it recive
 *
 * @argc: counting arguments
 * @argv: puting arguments in a an array
 *
 * Description: printing all arguments
 *
 * return 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
