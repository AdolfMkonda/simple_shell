#include "shell.h"

/**
 * strspn - the program that ......
 * @command: str
 * @str: str
 * Return: Always 0
 */

size_t strspn(const char *command, const char *ct)
{
	size_t n;
	const char *p;

	for(n=0; *command; command++, n++)
	{
		for(p=ct; *p && *p != *command; p++)
			;
		if (!*p)
			break;
	}
	return (n);
}
