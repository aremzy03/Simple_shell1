#include "main.h"
char *_strtok(char *str, const char *delim)
{
	static char *next = NULL;
	char *start, *end;

	if (next != NULL)
		next = str;
	else if (next == NULL)
		return (NULL);
	start = next;
	end = strpbrk(start, delim);
	if (end != NULL)
	{
		*end = '\0';
		next = end + 1;
	}
	else
	{
		next = NULL;
	}
	return (start);
}	
