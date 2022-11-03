#include "shell.h"

/**
 * printDir - function to take print current directory
 * 
 *  Return: 0
 */
void printDir()
{
	char cwd(1024);
	getcwd(cwd, sizeof(cwd));
	printf("\nDir: %s", cwd);

}