#include "shell.h"

/**
 * execute_cmd - program that extute entered command
 * @command: to be executed
 * .....
 */

void execute_cmd(char *command)
{
	char *args[max_cmd_length];
	char *token;
	int i = 0;
	pid_t pid;

	token = strtok(command, " ");

	while (token != NULL)
	{
		args[i++] = token;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("");
			exit(EXIT_FAILURE);
		}

		else if (pid < 0)
		{
			perror("");
		}
		else
		{
			wait(NULL);
		}
	}
}
