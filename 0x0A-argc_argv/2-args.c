#include "main.h"
#include <stdio.h>

/**
 *  main - a a program that prints all arguments it receive
 *  	-All arguments should be printed, including the first one
 *  	-Only print one argument per line, ending with a
 * @argc: number of argument passed to the program
 * @argv: Array name ,arrays of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
