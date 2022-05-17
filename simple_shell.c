#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "main.h"

int main(void)
{

	char *argv[] = {NULL, NULL};
	char *command_str;

	while(1)
	{
		printf("($) ");

		/* collect command from terminal using getline */
		command_str = enter_command();

		/*break command from terminal into array*/
		turn_to_args(command_str);
/*		args = turn_to_args(command_str);*/
		
		/*store the value gotten from terminal in the first index of the array*/
/*		argv[0] = command_str;

		if (fork() == 0)
		{
			if (execve(*argv, argv, NULL) == -1)
			{
				perror(argv[0]);
			}
			exit(1);
		} else wait(NULL);
*/
	}
	return (0);
}
