#include "shell.h"

/**
 * sh_loop- read parse and execute code
 *
 * Return: 0 or 1
 *
 */

void sh_loop(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf(">>>");
		line = sh_read_line();
		args = sh_split_line(line);
		status = sh_execute(args);

		free(line);
		free(args);
	} while (status);
}
