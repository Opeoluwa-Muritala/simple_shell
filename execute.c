#include "shell.h"

/**
 * sh_execute - run the shell program
 * @args: arguements
 *
 * Return:0
 */

int sh_execute(char **args)
{
	int i;

	if (args[0] == NULL)
	{
		return (1);
	}

	for (i = 0; i < sh_num_builtins(); i++)
	{
		if (strcmp(args[0], builtin_str[i] == 0))
		{
			return ((*builtin_func[i])(args));
		}
	}
	return (sh_launch(args));
}
