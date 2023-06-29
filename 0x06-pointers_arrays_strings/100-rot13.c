#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @str: input string  for anaysiss.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *str)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(str + i) == letters[j])
			{
				*(str + i) = rot[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
