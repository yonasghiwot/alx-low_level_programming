#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: string containing name of file
 * @text_content: NULL terminated string to add to end of file
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	long int filedr, count_len, w_bytes;

	if (!filename)
		return (-1);

	filedr = open(filename, O_WRONLY | O_APPEND);
	if (filedr < 0)
	{
		return (-1);
	}

	if (!text_content)
		count_len = 0;
	else
	{
		for (count_len = 0; text_content[count_len]; count_len++)
		{}
	}

	w_bytes = write(filedr, text_content, count_len);
	if (w_bytes < 0)
	{
		close(filedr);
		return (-1);
	}

	close(filedr);
	return (1);
}
