#include<stdio.h>


int main (){
	int arr[5];
	  
	 printf (" nhap vao 5 so nguyen:\n");
	 for (int  i = 0 ; i < 5 ; i++) 
	{
		printf (" phan tu thu %d ",i+1); 
		
		scanf ("%d",&arr[i]); 
		
			printf ("phan tu thu %d : %d\n", i+1 ,arr[i]); 
	
	}

	
	
	return 0; 
} 
