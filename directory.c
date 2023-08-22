#include "main.h"
int directory(char *path)
{
	int change;

	strcat(path, "/");
	change = chdir(path);
	if (change != 0)
		perror("(");
	return (0);
}
