#include "holberton.h"

/**
 * read_textfile - calculate size text
 * @filename: name file to calculate size
 * @letters: num letters
 * Return: return size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *file;

	if (filename == NULL)
		return (0);

	file = malloc (letters * sizeof(char) + 1);

	if(!file)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(file);
		return (0);
	}

	r = read(fd, file, letters);

	if (r == -1)
	{
		free(file);
		return (0);
	}

	w = write(STDOUT_FILENO, file, r);
	close(fd);
	free(file);

	if (r == w)
		return (w);

	return (0);
}
