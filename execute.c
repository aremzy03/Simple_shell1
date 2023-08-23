#include "main.h"

/**
 * execute - Function to execute a command.
 * @myarr: Array to be executed.
 *
 * Return: NULL.
 */

int execute(array myarr)
{
	char *exe[100], cat[200] = "/bin/", exe_path[200];
	int j, run;
	pid_t mypid;

	if (strstr(myarr.strings[0], cat) != NULL)
	{
		exe[0] = myarr.strings[0];
	}
	else
	{
		strcpy(exe_path, cat);
		strcat(exe_path, myarr.strings[0]);
		exe[0] = strdup(exe_path);
	}
	for (j = 1; myarr.strings[j] != NULL; j++)
	{
		exe[j] = myarr.strings[j];
	}
	exe[j] = NULL;
	mypid = fork();
	if (mypid == -1)
	{
		perror(":( Could not create process\n");
	}
	if (mypid  == 0)
	{
		run = execve(exe[0], exe, NULL);
		if (run == -1)
		{
			perror(")");
			free(exe[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
	if (strcmp(exe[0], cat) == 0)
	{
		free(exe[0]);
	}
	exe[0] = NULL;
	return (0);

}
