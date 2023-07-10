#include "main.h"
#include <string.h>

/**
*append_text_to_file- function that add content to a file
*
*@filename: pointer to file
*@text_content: content  to add to the file
*
*Return: 1 if succes  or -1 if error
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int writing, op;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	return (1);

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
	return (-1);

	writing = write(op, text_content, strlen(text_content));

	if (writing == -1)
	return (-1);

	close(op);
	return (1);

}
