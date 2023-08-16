#include "main.h"
void free_array(array *myarray)
{
	int i;
	if (myarray == NULL)
		return;
	if (myarray->strings)
	{
		for (i = 0; i < myarray->count;i++)
		{
			free(myarray->strings[i]);
		}
		free(myarray->strings);
	}
	myarray->count = 0;
}
