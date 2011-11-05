/*  Sauvage Tao
	Date: 11/05/11
	Simple linked list testfile:
		Test of simple linked list implementation */

#include <stdlib.h>
#include <stdio.h>
#include "SSL.h"

int main(void)
{
	List l = create_list((void*)12);

	if(!is_empty(l))
	{
		l  = insert_head(l, (void*)15);
	}
	else
	{
		printf("Unable to allocate a new list\n");
		return 0;
	}

	printf("%d\n", *(int*)(void*)l->data);

	delete_list(l);
	return 0;
}

