#include "main.h"
int main(void)
{
	array argv;
	int i;
	char out[100] = "exit";

	i = 0;
	while (i == 0)
	{
		printf(":) ");
		argv = get_command();
		if (strcmp(argv.strings[0], out) == 0)
		{
			free_array(&argv);
			i++;
		}
		else
		{
			execute(argv);	
			free_array(&argv);
		}
	}
	return (0);
}
