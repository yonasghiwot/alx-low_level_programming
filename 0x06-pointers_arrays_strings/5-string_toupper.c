#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: string under test.
 *
 * Return: iput String with all letters UPPERCASED.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}

