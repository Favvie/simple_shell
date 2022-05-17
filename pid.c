#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    char *command = NULL;
    size_t command_len = 0;
    ssize_t n_bytes = 0;
    printf("$ ");

    getline(&command, &command_len, stdin);
    command[n_bytes - 1] = '\0';

    char *argv[] = {NULL, NULL};
    argv[0] = command;

    if (execve(*argv, argv, NULL) == -1)
	{
		perror("Error: ");
	}
    return (0);
}
    
