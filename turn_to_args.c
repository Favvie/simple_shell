#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * turn_to_args - Entry point
 * @command_str: string parameter
 * Return: args(array)
 */

char **turn_to_args(char *command_str)
{
	/* command_str = "/bin/ls -l" == {"/bin/ls", "-l", NULL}*/
	char *str = NULL;
	int count = 0;
	char **args = NULL;
	int max_args;
	int args_count = 0;

	str = strtok(command_str, " ");
	while (str)
	{
		count++;
		str = strtok(NULL, " ");
	}
	max_args = count;


	args = malloc(sizeof(*args) * max_args);
	str = strtok(command_str, " ");
	while (str)
	{
		args[args_count++] = str;
		str = strtok(NULL, " ");
	}

	return (args);
}
