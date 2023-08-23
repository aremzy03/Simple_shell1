#include "main.h"

/**
 * directory - Function changes current directory to directory
 * specified in path.
 * @path: Path to directory.
 *
 * Return: If successful 0, else -1 if error.
 */
int directory(char *path)
{
	int change;

	strcat(path, "/");
	change = chdir(path);
	if (change != 0)
		perror("(");
	return (0);
}
