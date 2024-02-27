#include "shell.h"

/**
 * main - Is the starting point of the shell
 * ....
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
		command[strcspn(command, "\n")] = 0;
		execute_cmd(command);
	}

	return (0);
}
