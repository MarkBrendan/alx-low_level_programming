#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: the name of the FILE
 * @letters: letters is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t cont, FP, red;

	if (filename == NULL)
		return (0);

	FP = open(filename, O_RDONLY);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	red = read(FP, buff, letters);
	cont = write(STDOUT_FILENO, buff, red);

	if ((FP == -1) || (cont == -1) || (red != cont))
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(FP);

	return (cont);
}
