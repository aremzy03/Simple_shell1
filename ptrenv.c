#include "main.h"
int ptrenv(void)
{
	extern char **environ;
	int n;

	for (n = 0; environ[n] != NULL; n++)
	{
		printf("%s\n", environ[n]);
	}
	return (0);
}
