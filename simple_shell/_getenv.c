#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_getenv - a fonction to get the value of an envirement variable
*@name:name of variable
*
*Return:value of variable
*/

char *_getenv(const char *name)
{
	char **env = environ;
	char *env_var, *env_copy;
	unsigned int i;

	for (i = 0; env[i] != NULL; i++)
	{
		env_copy = strdup(env[i]);
		env_var = strtok(env_copy, "=");
		if (strcmp(name, env_var) == 0)
		{
			env_var = strtok(NULL, "=");
			return (env_var);
		}
	}
	return (NULL);
}
