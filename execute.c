#include "shell.h"

/**
 * handle-builtin - Handle Builtin Command
 * @cmd: Parsed Command
 * @er: Statue of last Execute
 * Return: -1 Fail 0 Success (Return: Execute Builtin)
 */

int handle_builtin(char **cmd, int er)
{
	bul_t bil[] = {
		{"cd", change_dir},
		{"env", dis_env},
		{"echo", echo},
		{"history",history},
		{"help", display_help},
		{NULL,NULL}
	};
	int i = 0;

	while ((bil + i) -> command)
	{
		if (_strcmp(cmd[0], (bil + i)->command) == 0)
		{
			return ((bil + i) -> fun(cmd,er));
		}
		i++;
	}
	return (-1);
}

/**
 * check_cmd - Execute Simple Shell Command (Fork,Wait,Execute)
 *
 * @cmd: Parsed Command
 * @input: User Input
 * @c: Shell Execution Time Case of Command Not Found
 * @argv: Program Name
 * Return: 1 Case COmmand Null -1 Wrong Command 0 Command Executed
 */

int check_cmd(char **cmd, char *input, int c, char **argv)
{
	int status;
	pid_t pid;

	if (*cmd == NULL)
	{
		return (-1);
	}
	pid = fork();

	if (pid == -1)
	{
		perror("Error");
		return (-1);
	}

	if (pid == 0)
	{
		if (_strncmp(*cmd, "./",2) != 0 && _strncmp(*cmd, "/",1) != 0)
		{
			path_cmd(cmd);
		}

		if (execve(*cmd, cmd, environ) == -1)
		{
			print_error(cmd[0], c, argv);
			free(input);
			free(cmd);
			exit(EXIT_FAILURE);
		}
		return(EXIT_SUCCESS);
	}
	wait(&status);
	return (0);
}

/**
 * signal_to_handel - Handle ^C
 * @sig: Captured Signal
 * Return: void
 */
void signal_to_handel(int sig)
{
	if (sig = SIGINT)
	{
		PRINTER("\n$");
	}
}
