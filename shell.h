#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <unstd.h>

#define MAXCOM 1000 
#define MAXLIST 100 

#define clear() printf("\033[H\033[J")

void init_shell(void);

int Input(char *str);

void printDir(void);

void execArgs(char **parsed);

void Help(void);

int ownCmdHandler(char **parsed);

void parse(char *str, char **parsed);

int processString(char *str, char **parsed, char **parsedpipe);

int parsePipe(char *str, char **strpiped);


#endif