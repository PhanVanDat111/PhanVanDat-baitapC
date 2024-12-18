#include<stdio.h>


int main (){
	int n;
	 
	 printf ("nhap vao cac phan thu trong mang : "); 
	 scanf("%d",&n);
	 
	 int arr[n];
	printf ("nhap vao phan tu trong mang: \n");
	for (int i=0; i<n ; i++)
	{
		printf (" phan tu thu %d: ",i+1);
		scanf ("%d",&arr[i]); 
	} 
	printf("cac phan tu trong mang : \n");
	for (int i = 0; i < n; i++)
	{
		printf("phan tu thu %d: %d\n", i + 1, arr[i]);
	}
	
	return 0; 
} 
