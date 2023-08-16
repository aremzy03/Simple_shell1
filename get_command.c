#include "main.h"
array get_command()
{
	array arr;
	size_t n;
	int command, i;
	char *cmd = NULL, *cmd_cpy = NULL, *token = NULL, *delim = " \n";

	command = getline(&cmd, &n, stdin);
	if (command == -1)
		exit(1);

	cmd_cpy = strdup(cmd);
	token = strtok(cmd, delim);
	while (token)
	{
		token = strtok(NULL, delim);
		arr.count++;
	}
	arr.strings = malloc(sizeof(char *) * (arr.count + 1));
	token = strtok(cmd_cpy, delim);
	i = 0;
	while(token)
	{
		arr.strings[i] = strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	arr.strings[i] = NULL;
	free(cmd), free(cmd_cpy);
	return(arr);
}
