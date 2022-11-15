#include "shell.h"

/**
 * main - Simple Shell (shell)
 * @argc: Arguement count
 * @argv: Arguement value
 * Return: 0 If Error 1
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	char *input, **cmd;
	int counter = 0, statue = 1, st = 0;
	if (argv[1] != NULL)
	{
		read_file(argv[1], argv);
	}
	signal(SIGINT, signal_to_handel);
	while (statue)
	{
		counter++;
		if (isatty(STDIN_FILENO))
		{
			prompt();
		}
		input = _getline();
		if (input[0] == '\0')
		{
			continue;
		}
		history(input);
		cmd = parse_cmd(input);
		if (_strcmp(cmd[0], "exit") == 0)
		{
			exit_bul(cmd, input, argv, counter);
		}
		else if (check_builtin(cmd) == 0)
		{
			st = handle_builtin(cmd, st);
			continue;
		}
		else
		{
			st = check_cmd(cmd, input, counter, argv);
		}
		free_all(cmd, input);
	}
	return (statue);
}

/**
 * create_enviroment - Create array of enviromental variable
 * @envi: Array of Enviromental Variable
 * Return: Void
 */
void create_enviroment(char **envi)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		envi[i] = _strdup(environ[i]);
	}
	envi[i] = NULL;
}
