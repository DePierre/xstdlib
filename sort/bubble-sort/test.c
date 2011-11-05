/*  Ruhier Anthony
	Date : 11/05/2011
	Bubble Sort Test
		Test file testing bublesort */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "bubble-sort.h"

#define L 15

int main()
{

	int i = 0, val = 0;
	float array[L] = 0;	

	srand(time(NULL));

	for (i = 0; i < L - 1; i++)
	{		
		val = (rand() % 30) + 1;
		array[i] = val;

	}

	bubblesort_array(array);

	printf("\n\n");

	for (i = 0; i < L - 1; i++)
	{
		
		print(" %.0f ", array[i]);

	}

	return 0;

}

