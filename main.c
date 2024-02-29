#include "shell.h"

/**
 * commands - the program that read user input commands
 * @command: command to be read
 * @cmdlen: number of bytes read
 * @stream: stdin
 */

void commands(char **command, size_t *cmdlen, FILE *stream)
{
	getline(command, cmdlen, stream);
}

/**
 * main - Is the starting point of the shell
 * Return: always 0
 */
int main(void)
{
	char *command = NULL;
	size_t cmdlen = 0;

	while (!0)
	{
		write(STDOUT_FILENO, "ado##: ", 8);
		commands(&command, &cmdlen, stdin);
		if (command == NULL || *command == '\0')
			write(STDOUT_FILENO, "ado##: ", 8);
		execute_cmd(command);
	}
	return (0);
}
