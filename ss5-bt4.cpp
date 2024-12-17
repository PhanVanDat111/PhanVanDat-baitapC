#include<stdio.h>


int main (){
	int soNguyen ;
	printf (" nhap mot so nguyen tu 1 den 10 : ");
	scanf("%d",&soNguyen);
	// kiem tra xem so nguyen co dung 1-10 kh
	if(soNguyen<1|| soNguyen>10)
	{
	printf (" ban da nhap sai hay nhap tu 1 den 10");	
	}
	else // in ra bang cu chuong 
	{
	printf("\n bang cu chuong cua %d: ",soNguyen);
	for (int i = 1;i<10;i++)
	{
		printf("\n %d x %d",soNguyen,i);
		 
	} 
	}
	
	
	return 0;
}
