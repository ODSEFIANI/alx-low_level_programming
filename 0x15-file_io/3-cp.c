#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * close_file - Closes the file descriptors.
 * @f: The closed fd.
 */
void close_file(int f)
{
	if (close(f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}

/**
 * main - moves the content of a file to another file.
 * @ac: arguments number
 * @av: An array of pointers to an argument.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int des, res, r, w;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	res = open(av[1], O_RDONLY);
	r = read(res, buffer, 1024);
	des = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (res == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		w = write(des, buffer, r);
		if (des == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		r = read(res, buffer, 1024);
		des = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(res);
	close_file(des);
	return (0);
}
