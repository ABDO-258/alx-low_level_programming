#include "main.h"
#include <string.h>
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
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op_from = open(av[1], O_RDONLY);
	if (op_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	op_to = open(av[2],  O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (op_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	while ((reading = read(op_from, buffer, 1024)) > 0)
	{
		writing = write(op_to, buffer, reading);
		if (writing == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	/*dprintf(1, "reading value %d\n", reading);
	dprintf(1, "writing value %d\n", writing);*/
	closing = close(op_from);
	if (closing == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", op_from);
		exit(100);
	}
	closing = close(op_to);
	if (closing == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", op_to);
		exit(100);
	}
	return (0);
}





