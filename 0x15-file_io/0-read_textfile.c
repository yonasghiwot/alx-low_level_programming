#include "main.h"

/**
 * read_textfile - reads the contents of a text file and prints
 * it to the POSIX standard output
 * @filename: string containing name of file
 * @letters: amount of characters to read and print
 * Return: number of characters successfully read and printed
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	long int filedr, r_bytes, w_bytes;
	char *out;

	out = malloc(sizeof(char) * letters);
	if (!out || !filename)
		return (0);

	filedr = open(filename, O_RDONLY);
	if (filedr < 0)
	{
		close(filedr);
		free(out);
		return (0);
	}

	r_bytes = read(filedr, out, letters);
	if (r_bytes < 0)
	{
		close(filedr);
		free(out);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, output, r_bytes);
	if (w_bytes < r_bytes)
	{
		close(filedr);
		free(output);
		return (0);
	}
	close(filedr);
	free(output);
	return (w_bytes);
}
