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
	char *path = getenv("PATH");
	char *buffer = strdup(path);
	int i = 0;
	pid_t pid;

	token = strtok(command, " \n");

	while (token != NULL && i < 20)
	{
		args[i++] = token;
		token = strtok(NULL, " \n");
	}
	args[i] = NULL;

	pid = fork();
	if (pid == 0)
	{
		execvp(args[0], args);

		token = strtok(buffer, ":");

		while (token != NULL)
		{
			char fullPath[1024];

			snprintf(fullPath, sizeof(fullPath), "%s%s", token, args[0]);
			execv(fullPath, args);
			token = strtok(NULL, ":");
		}
		perror("");
	}
	else
		wait(NULL);
}
