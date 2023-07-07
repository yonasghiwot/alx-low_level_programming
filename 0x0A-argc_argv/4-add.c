#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -a program that adds positive numbers., followed by a new line
 *  @argc: number of argument passed to the program
 * @argv: Array name ,arrays of strings
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int summation = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		summation = summation + atoi(argv[i]);
	}
	printf("%d\n", summation);
	return (0);
}

