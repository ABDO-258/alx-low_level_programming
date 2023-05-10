#include "main.h"
#include <string.h>
/**
*error_handler- function that print error msg
*
*@error: exit error
*@arg: name of file 1 or file 2
*@value_of_fd: value of file descriptor
*
*Return: 0
*/

int error_handler(int error, char *arg, int value_of_fd)
{
	switch (error)
	{
		case 97:
			dprintf(2, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", arg);
			exit(error);

		case 99:
			dprintf(2, "Error: Can't write to %s\n", arg);
			exit(error);
		case 100:
			dprintf(2, "Error: Can't close fd %d\n", value_of_fd);
			exit(100);
		default:
			return (0);

	}
}
/**
*main- function that copy file 1 to file 2
*
*@ac: argument counter
*@av: argument vector (file1 & file2)
*
*Return: 0 if succes  or 97 or 98 or 99 if error
*/
int main(int ac, char **av)
{
	int writing, reading, op_from, op_to, closing;
	char buffer[1024];

	if (ac != 3)
	{
		error_handler(97, NULL, 0);
	}
	op_from = open(av[1], O_RDONLY);
	if (op_from == -1)
	{
		error_handler(98, av[1], 0);
	}
	op_to = open(av[2],  O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (op_to == -1)
	{
		error_handler(99, av[2], 0);
	}
	while ((reading = read(op_from, buffer, 1024)) > 0)
	{
		if (reading == -1)
		{
			error_handler(98, av[1], 0);
		}
		writing = write(op_to, buffer, reading);
		if (writing == -1)
		{
			error_handler(99, av[2], 0);
		}
	}
	closing = close(op_from);
	if (closing == -1)
	{
		error_handler(100, NULL, op_from);
	}
	closing = close(op_to);
	if (closing == -1)
	{
		error_handler(100, NULL, op_to);
	}
	return (0);
}
