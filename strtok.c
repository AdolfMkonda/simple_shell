#include "shell.h"

/**
 * _strtok - strtok program
 * @str: string to be tokenized
 * @delim: delimiter character
 * Return: always token
 */

char *_strtok(char *str, const char *delim)
{
	static char *ptr;
	char *token_start = ptr;

	if (str != NULL)
		ptr = str;
	if (ptr == NULL)
		return (NULL);
	while (*ptr != '\0' && strchr(delim, *ptr) != NULL)
	{
		++ptr;
	}

	if (*ptr == '\0')
		return (NULL);
	while (*ptr != '\0' && strchr(delim, *ptr) == NULL)
	{
		++ptr;
	}

	if (*ptr == '\0')
		ptr = NULL;
	else
	{
		*ptr = '\0';
		++ptr;
	}
	return (token_start);
}
