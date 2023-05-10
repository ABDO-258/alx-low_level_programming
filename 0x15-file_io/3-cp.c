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
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	op_from = open(av[1], O_RDONLY);
	if (op_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	op_to = open(av[2],  O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((reading = read(op_from, buffer, 1024)) > 0)
	{
		writing = write(op_to, buffer, reading);
		if (writing != reading || op_to == -1)
		{
			dprintf(2, "Error: Can't write to %s", av[2]);
			exit(99);
		}
	}
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





