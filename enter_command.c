#include <stdio.h>

/**
 * enter_command - Function to enter command into the shell.
 *
 * Return: command(char)
 */

char *enter_command(void)
{
	char *command = NULL;
	size_t command_len = 0;
	ssize_t n_bytes = 0;

	n_bytes = getline(&command, &command_len, stdin);
	if (n_bytes == -1)
	{
		perror("Error");
	}
	command[n_bytes - 1] = '\0';
	return (command);
}
