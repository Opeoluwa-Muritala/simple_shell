#include "shell.h"

/**
 * execArgs - function to execute commands
 * 
 *  Return: error 1 else 0
 */

void execArgs(char **parsed)
{
    pid_t pid = fork();

    if (pid == -1)
    {
        printf("Failed forking a child\n");
        return (1);
    }
    else if (pid == 0)
    {
        if (execvp(parsed[0], parsed) < 0)
        {
            printf("Could not execute commands\n")
        }
        exit (0);
    }
    else
    {
        wait(NULL);
        return (0);
    }
}