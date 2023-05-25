#include "main.h"
/**
*get_cmd_path - a fonction to get the cmd full path
*@command:input command
*
*Return:  command path
*/
char *get_cmd_path(char *command)
{
	char *path = _getenv("PATH");
	char *path_token;
	char *full_cmd;
	struct stat st;

	path_token = strtok(path, ":");
	while (path_token)
	{
		full_cmd = malloc(strlen(path_token) + strlen(command) + 2);
		if (full_cmd == NULL)
			return (NULL);
		strcpy(full_cmd, path_token);

		strcat(full_cmd, "/");

		strcat(full_cmd, command);

		if (stat(full_cmd, &st) == 0)
			return (full_cmd);

		free(full_cmd);
		path_token = strtok(NULL, ":");
	}
	return (NULL);
}
