#include <string.h>
#include "main.h"
/**
 * create_file - creates the required file.
 * @filename: file name
 * @text_content: the string to write to the file
 *
 * Return: 1 on success, -1 in case of failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t f, m, j;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		j = strlen(text_content);
		m = write(f, text_content, j);
		if (m == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
