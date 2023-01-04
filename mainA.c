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

	for (int i = 0 ; i < LENGTH - 1 ; i++)
	{
            printf("%d,",arr[i]);
	}
    printf("%d\n",arr[LENGTH-1]);

}
