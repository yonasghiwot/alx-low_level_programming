#include "main.h"
/**
 * rev_string - prints in reverse a string.
 * @s: tested string
 * Return: nothing .
 */
void rev_string(char *s)
{
	int length, j;
	char a;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	for (j = 0; j < (length / 2); j++)
	{
		a = *(s + j);
		*(s + j) = *(s + length - j - 1);
		*(s + length - j - 1) = a;
	}
}
