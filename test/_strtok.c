#include "main.h"

/**
* *_strtok - Function used to split a string into small tokens.
* @str: String to split into tokens.
* @delim: Character used to seperate strings into smaller parts.
*
* Return: If successful pointer to token,
* else NULL if no tokens.
*/

char *_strtok(char *str, const char *delim)
{
	static char *next;
	*next = NULL;
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
