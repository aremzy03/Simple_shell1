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
typedef struct stringArray {
	char **strings;
	int count;
} array;
/***********Functions*******/
array get_command();
void free_array(array *myarray);
void execute(array myarr);
#endif
