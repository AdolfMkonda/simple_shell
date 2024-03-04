#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#define max_token 20
#define max_cmd_length 100

void commands(char **command, size_t *cmdlen, FILE *stream);
void execute_cmd(char *command);
char *_strcat(char *dest, char *src);
char *_strtok(char *str, const char *delim);

#endif
