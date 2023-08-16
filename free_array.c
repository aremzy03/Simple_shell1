#include "main.h"
void free_array(array *myarray)
{
	int i;
	for (i = 0; i < myarray->count;i++)
	{
		free(myarray->strings[i]);
	}
	free(myarray);
}
