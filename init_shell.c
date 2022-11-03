#include "shell.h"


/**
 * init_shell - function to start the shell
 * 
 *  Return: shell
 */

void init_shell(void)
{
	clear();
	printf("\n\n\n\n**********""**********");
	printf("\n\n\t**** Group Shell Project ALX****");

	printf("\n\n\n\n**********""**********");

	char *username = getenv("USER");
	printf("\n\nUSER is: @%s", username);
	printf("\n");
	sleep();
	clear();
}