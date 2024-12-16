#include<stdio.h>


int main(){
	int num1,num2,num3; // khai bao 3 so num1 num2 num3
	//nhap cac so num1 num2 num3 
		printf ("nhap num nhat la : "); 
	scanf("%d",&num1); 
	
	printf ("nhap num hai la: ") ;
	scanf ("%d",&num2);
	
	printf (" nhap num ba la: "); 
	scanf  ("%d",&num3); 
	
	if(( num3>num3&&num1<num2) || (num3 < num1 && num3 > num2)) // kiem tra num3 có nam trong khoang cach num1 va num2 khong
	{
		printf(" %d la so nam trong khoang cach giua %d va %d",num3,num1,num2);
	} 
	else
	{
		printf(" %d khong phai la so nam trong khoang cach giua %d va %d",num3,num2,num1 );
	} 
	return 0; 
} 
