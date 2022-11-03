#ifndef MAIN_H
#define MAIN_H

//Import important header files
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <unstd.h>

//Allocate Maximum space
#define MAXCOM 1000 // max number
#define MAXLIST 100 // max number


//Clear the Shell using escape sequence
#define clear() printf("\033[H\033[J")

//Initialize shell startup
void init_shell(void);

//Function to take in input
int Input(char *str);

//Function to print current directory
void printDir(void);

//Function to execute commands
void execArgs(char **parsed);

//Piped command is executed
void execArgsPiped(char **parsed);

//Help command
void Help(void);

//Execute built in commands
int ownCmdHandler(char **parsed);

//Function for parsing command words
voide parse(char *str, char **parsed);

//Function to process string
int processString(char *str, char **parsed, char **parsedpipe);

//Function for finding pipe
int parsePipe(char *str, char **strpiped);


#endif