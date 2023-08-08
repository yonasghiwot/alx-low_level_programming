#include "main.h"

/**
 * create_file - creates a file
 * @filename: string containing name of file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on fail
 */


int create_file(const char *filename, char *text_content)
{
	long int filedr, count_len, w_bytes;

	if (!filename)
		return (-1);

	filedr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
