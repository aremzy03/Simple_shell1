#include "main.h"
int compare(array com)
{
	char *out[100] = {"exit", "env", "cd"};

	if (strcmp(com.strings[0], out[0]) == 0)
		return (1);
	else if (strcmp(com.strings[0], out[1]) == 0)
		return (2);
	else if (strcmp(com.strings[0], out[2]) == 0)
		return (3);
	else
		return (0);
}	
