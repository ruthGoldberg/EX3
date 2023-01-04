void shift_element(int* arr, int i){
	
		for(int j=i ; j > 0 ; j--)
		{
			*(arr + j) = *(arr + (j -1));
		}
		
}

void insertion_sort(int* arr , int len){
	int i, key, j ;
	
    for (i = 1; i < len ; i++) 
    {
        key = *(arr + i);
        j = i - 1;
  
        while (j >= 0 && *(arr + j) > key) 
        {
            shift_element( (arr + j) , 1 );
			j--;
        }
        *(arr+(j + 1)) = key;
		
	}
	
}




