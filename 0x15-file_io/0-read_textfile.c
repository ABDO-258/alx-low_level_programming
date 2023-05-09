#include "main.h"

/**
*read_textfile- function that write a number of char from a file to stdout
*
*@filename: pointer to file
*@letters: number of char to be writing
*
*Return: number of char  or 0 if error
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reading, writing, op;
	char *buffer;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	reading = read(op, buffer, letters);
	if (reading == -1)
	return (0);

	writing = write(STDOUT_FILENO, buffer, letters);

	if (writing == -1)
	return (0);

	close(op);
	free(buffer);

	return (writing);

}
