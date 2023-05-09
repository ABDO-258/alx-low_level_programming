#include "main.h"
#include <string.h>

/**
*create_file- function that create a file
*
*@filename: pointer to file
*@text_content: content  of the file
*
*Return: number of char  or 0 if error
*/
int create_file(const char *filename, char *text_content)
{
	int writing, op;


	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	text_content = "";

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (op == -1)
	return (-1);

	writing = write(op, text_content, strlen(text_content));

	if (writing == -1)
	return (-1);

	close(op);
	return (1);

}
