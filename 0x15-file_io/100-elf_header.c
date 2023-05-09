#include <string.h>
#include "main.h"
/**
 * append_text_to_file - appends the text.
 * @filename: file name
 * @text_content: string to add tat the end of the file
 *
 * Return: 1 on success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t f, m, j;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(f);
		return (1);
	}
	j = strlen(text_content);
	m = write(f, text_content, j);
	if (m == -1)
		return (-1);
	close(f);
	return (1);
}
