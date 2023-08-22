#include "main.h"

/**
* _getline - Function reads an entire line from stream.
* @linptr: Address of buffer.
* @n: Pointer to buffer.
* @stream: File reading lines.
*
* Return: If successful number of characters read,
* else -1 if failed.
*/

ssize_t _getline(char **linptr, ssize_t *n, FILE *stream)
{
	ssize_t num_read, pos = 0;
	int ch;
	char *newptr;

	if (*linptr == NULL || *n == 0)
	{
		*n = 128;
		*linptr = malloc(*n);
		if (linptr == NULL)
			return (-1);
	}
	while ((ch = fgetc(stream)) != EOF)
	{
		if (pos >= *n - 1)
		{
			*n *= 2;
			newptr = realloc(*linptr, *n);
			if (newptr == NULL)
				return (-1);
			*linptr = newptr;
		}
		(*linptr)[pos++] = (char)ch;
		if (ch == '\n')
			break;
	}
	(*linptr)[pos] = '\0';
	if (pos > 0)
		num_read = pos;
	else if (ch == EOF)
		num_read = -1;
	return (num_read);
}
