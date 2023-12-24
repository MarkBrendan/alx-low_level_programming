#include "main.h"

/**
 * append_text_to_file - Write a function that appends text
 * at the end of a file
 *
 * @filename: the name of the FILE
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int FP, len, chck;

	len = strlen(text_content);
	if (filename == NULL)
		return (-1);

	FP = open(filename, O_CREAT | O_EXCL | O_WRONLY | O_APPEND);

	if (FP == -1)
		return (-1);

	chck = write(FP, text_content, len);

	if (chck == -1)
		return (-1);

	close(FP);

	return (1);
}
