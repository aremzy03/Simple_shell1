#include "main.h"
int main(void)
{
	array argv;
	int i;

	printf(":) ");
	argv = get_command();
	for (i = 0; i < argv.count; i++)
		printf("%s\n", argv.strings[i]);
	execute(&argv);
		
	free_array(&argv);
	
	return (0);
}
