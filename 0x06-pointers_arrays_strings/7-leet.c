#include "main.h"
/**
 * leet -change vowels to numbers and a function that encodes a str to 1337.
 * @str: string to be changed.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *str)
{
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";
	int i;
	int j;

	i = 0;
	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(str + i) == letters[j])
			{
				*(str + i) = numbers[j];
			}
		}
		i++;
	}
	return (str);
}

