#include "shell.h"

/**
 * main - Load needed files and run command loop
 * @argc: ope
 * @argv: num
 * Return: 0 or -1 in error
 */

int main(int argc, char **argv)
{
	sh_loop();

	return (EXIT_SUCCESS);
}
