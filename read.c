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
