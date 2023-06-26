#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
  * main - creates a random key for the program 101 crackme
  * Return: always 0
  */
int main(void)
{
	int accu, i, n;

	char letters[27] = "abcdefghijklmnopqrstuvwxyz";
	char key[30];

	sum = 0;
	i = 0;
	srand(time(NULL));
	while (accu < 2772)
	{
		r = rand() % 10;
		key[i] = letters[r];
		accu += key[i];
		i++;
	}
	n = 2772 - accu;
	key[i] = n;
	printf("%s\n",  key);
	return (0);
}
