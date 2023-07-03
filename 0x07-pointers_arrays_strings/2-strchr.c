#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 *@s: pointer to string s.
 *@c:character.
 *Return:a pointer to the first occurrence of the character c in the string s
 *      :or return  NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			break;
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
