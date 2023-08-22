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
	int i, j;

	i = 0;
	while (i == 0)
	{
		printf(":) ");
		argv = get_command();
		j = compare(argv);
		switch (j)
		{
		case 0:
			execute(argv);
			free_array(&argv);
			break;
		case 1:
			i++;
			break;
		case 2:
			ptrenv();
			break;
		case 3:
			directory(argv.strings[1]);
			break;
		}
	}
	return (0);
}
