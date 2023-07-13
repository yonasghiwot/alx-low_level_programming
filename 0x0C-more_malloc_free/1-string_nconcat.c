#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that  Concatenates 2 strings using
 *                  maximum limit of length of the first plus n.
 * @s1:pointer to the first string.
 * @s2:pointer to the second string.
 * @n: maximum number of bytes of s2 to be concatenated to s1.
 * Return: Null - If the function fails.
 *         else - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatend;
	unsigned int lens1, i, j;

	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
	{
		lens1++;
		i++;
	}
	concatend = malloc(sizeof(char) * (lens1 + n));

	if (concatend == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concatend[i] = s1[i];

	for (j = 0; (s2[j] && j < n); j++)
		concatend[i + j] = s2[j];

	concatend[i + j + 1] = '\0';
	return (concatend);
}
