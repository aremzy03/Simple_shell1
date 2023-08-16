#include "main.h"
void execute(array myarr)
{
	char exe[100], cat[200] = "/bin/";
	int j, run;
	pid_t mypid;

	for(j = 0; myarr->strings[j] != NULL; j++)
	{
		exe[j] = strdup(myarr->strings[j]);
	}
	exe[j] = NULL;
	mypid = fork();
	if (mypid == -1)
	{
		perror(":( Could not create process\n");
		exit(1);
	}
	if (mypid  == 0)
	{
		run = execve(exe[0], exe, NULL);
		if (run == 0)
		{
			perror(":( error\n");
		}
	}
	else
	{
		wait(NULL);
	}
	for (j = 0; exe[j] != NULL; j++)
	{
		free(exe[j]);
	}
}
