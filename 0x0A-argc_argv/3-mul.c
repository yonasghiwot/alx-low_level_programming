#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -a program that multiply two numbers, followed by a new line
 *	-if the program doesn't receive 2 arguments,program  print Error,  return 1
 * @argc: number of argument passed to the program
 * @argv: Array name ,arrays of strings
 * Return: error  If the program doesn't  receive 2 arguments \n & return 1
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	int multiplication = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else if (argc == 3)
	{
		for (i = 0 ; i < argc ; i++)
		{
			if (i == 1)
			{
				j = atoi(argv[i]);
			}
			else if (i == 2)
			{
				k = atoi(argv[i]);
			}
		}
	multiplication = j * k;
	printf("%d\n", multiplication);
	}
	return (0);
}

