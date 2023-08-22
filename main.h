#ifndef MAIN_H
#define MAIN_H

/********STATIC LIBRARIES**********/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

/*********STRUCTURES*********/

/**
 * struct stringArray - Struct made up of an array of strings.
 * @strings: First member a string.
 * @count: Second member.
 *
 * Description: Struct of a combination of a character and string.
 */

typedef struct stringArray
{
	char **strings;
	int count;
} array;
extern char **environ;
/***********Functions*******/
array get_command(void);
void free_array(array *myarray);
int execute(array myarr);
int main(void);
int ptrenv(void);
ssize_t _getline(char **linptr, ssize_t *n, FILE *stream);
char *_strtok(char *str, const char *delim);
int compare(array com);
int directory(char *path);
#endif
