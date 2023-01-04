#include <stdio.h>
#include "EX3.h"

#define LENGTH 50

int main() {

	int arr[LENGTH];

	for (int i = 0 ; i < LENGTH ; i++)
	{
		scanf(" %d",&arr[i]);
	}

	insertion_sort(arr , LENGTH);

	for (int i = 0 ; i < LENGTH ; i++)
	{
        if(i == LENGTH -1)
		    printf("%d",arr[i]);
        else
            printf("%d,",arr[i]);
	}
    printf("\n");

}
