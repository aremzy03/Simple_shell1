#include "main.h"

/**
 * main - Function to start the program.
 * @void: Parameter of the program.
 *
 * Return: 0.
 */

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
			break;
		}
		execute(argv);
		free_array(&argv);
	}
	return (0);
}
