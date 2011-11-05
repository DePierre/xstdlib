/*RUHIER Anthony
Date : 05/11/2011
Datatype name : Bubble Sort Test
	Explanations : Test file testing bublesort
*/

#include <stdlib.h>
#include <stdio.h>
#include "../bubblesort.h"

#define TAILLE 15

int main()
{

	int i = 0, val = 0;
	float array[TAILLE] = 0;	

	srand(time(NULL));

	for (i = 0; i < TAILLE - 1; i++)
	{		
		val = (rand() % 30) + 1;
		array[i] = val;

	}

	bubblesort_array(array);

	printf("\n\n");

	for (i = 0; i < TAILLE - 1; i++)
	{
		
		print

}

