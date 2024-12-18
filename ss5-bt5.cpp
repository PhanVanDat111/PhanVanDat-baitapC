#include<stdio.h>


int main (){
	// vong lap bang cuu chuong 1-9
	
	for (int i=1;i<=9;i++)
	{
	printf(" bang cuu chuong cua %d: \n",i);
    
    
	for (int j=1;j<=9;j++)
	{
		printf(" %d x %d= %d\n ", i , j, i * j);
	} 
	printf ("\n"); 
}

	
	
	return 0; 
} 
