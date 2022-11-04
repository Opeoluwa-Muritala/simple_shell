#include "shell.h"

int sh_cd(char **args);
int sh_help(char **args);
int sh_exit(char **args);


char *builtin_str[] = {
"cd",
"help",
"exit"
};


int (*builtin_func[]) (char **) = {
&sh_cd,
&sh_help,
&sh_exit
};

/**
 * sh_num_builtins - Builtinfunctions
 *
 * Return: 0
 */

int sh_num_builtins(void)
{
return (sizeof(builtin_str) / sizeof(char *));
}

/**
 * sh_cd - Builtinfunctions
 * @args: arguements
 *
 * Return: 0
 *
 */
int sh_cd(char **args)
{
if (args[1] == NULL)
{
fprintf(stderr, "sh: expected argument to \"cd\"\n");
}
else
{
if (chdir(args[1]) != 0)
{
perror("sh");
}
}
return (1);
}

/**
 * sh_help- Builtinfunctions
 * @args: arguements
 * Return: 0
 *
 */
int sh_help(char **args)
{
int i;
printf("ALX's SH\n");
printf("Type program names and arguments, and hit enter.\n");
printf("The following are built in:\n");

for (i = 0; i < sh_num_builtins(); i++)
{
printf("  %s\n", builtin_str[i]);
}

printf("Use the man command for information on other programs.\n");
return (1);
}

/**
 * sh_exit - Builtinfunctions
 * @args: arguemants
 *
 * Return: 0
 *
 */
int sh_exit(char **args)
{
return (0);
}
