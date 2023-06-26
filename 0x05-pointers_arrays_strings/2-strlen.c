/**
 * _strlen - returns the length of a string.
 * @s: character argument to be  tested
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
