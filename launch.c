#include "shell.h"

/**
 * sh_launch - function for launching a program
 *
 * @args: arguements
 *
 * Return: 1
 */

int sh_launch(char **args)
{
	pid_t pid, wpid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("sh");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("sh");
	}
	else
	{
		do {
			wpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
