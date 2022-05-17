#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int turn_to_args(char *command_str)
{
	/* command_str = "/bin/ls -l" == {"/bin/ls", "-l", NULL}*/
	char *str = NULL;

	char **args = NULL;
	int max_args = 6;
	int args_count = 0;

	str = strtok(command_str, " ");
	args = malloc(sizeof(*args) * max_args);
	while (str)
	{
		args[args_count++] = str;
		printf("%s\n", args[args_count]);
		str = strtok(NULL, " ");
	}

	return (0);
}
