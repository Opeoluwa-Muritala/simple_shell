#include "shell.h"

/**
 * Input - function to take input
 * 
 *  Return: error 1 else 0
 */

int Input(void)
{
	char *buf;

	buf = readline("\n>>>");
	if (strlen(buf) != 0)
	{
		add_history(buf);
		strcpy(str, buf);
		return (0);
	}
	else{
		return (1);
	}
}