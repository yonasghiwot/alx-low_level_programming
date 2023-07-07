#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numnber of arguments passed to program.
 * @argc: number of argument passed to the program
 * @argv: Array name ,arrays of strings
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
