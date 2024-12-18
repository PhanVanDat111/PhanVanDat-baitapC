#include<stdio.h>


int main ()
{
	// khai bao gia tri mang
	int arr[]={1,2,3,4,5};
	int doDai= sizeof(arr)/ sizeof (arr[0]);
	printf("Cac phan tu trong mang la:\n");
	// in phan tu trong mang
	for ( int i=0;i<doDai;i++ )
	{
		printf(" phan tu thu %d: %d\n",i+1,arr[i]) ;
	}
	 // do dai cua mang
	 printf(" do dai cua mang ky tu la: %d",doDai) ;
	
	
	
	
	
	
	
	
	
	
	return 0; 
 } 
