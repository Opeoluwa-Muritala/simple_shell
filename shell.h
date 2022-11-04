#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void sh_loop(void);
#define SH_RL_BUFFSIZE 1024
char *sh_read_line(void);
#define SH_TOK_BUFFSIZ 64
#define SH_TOK_DELIM " \t\r\n\a"
char **sh_split_line(char *line);
int sh_launch(char **args);
int sh_cd(char **args);
int sh_help(char **args);
int sh_exit(char **args);
int sh_num_builtin(void);
int sh_execute(char **args);

#endif
