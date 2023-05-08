#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output >>1
 * @filename: file name
 * @letters: the num of letters it should read and print
 *
 * Return: the num of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, j, l;
	char *s;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	s = malloc(sizeof(char) * letters);
	l = read(f, s, letters);
	j = write(STDOUT_FILENO, s, l);
	free(s);
	close(f);
	return (j);
}
