#include "main.h"
/**
 *ptrenv - prints the list of environment in the current directory
 *
 *Return: always zero(0)
 */
int ptrenv(void)
{
	int n;

	for (n = 0; environ[n] != NULL; n++)
	{
		printf("%s\n", environ[n]);
	}
	return (0);
}
