#include "main.h"

/**
 * read_textfile -reads a tecxt file and print the letters
 * @filename: name of file.
 * @letters: no_ of letters printed
 *
 * Return: no_ of letters printed. If program fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close (fd);

	free(buf);

return: (nwr);
}
