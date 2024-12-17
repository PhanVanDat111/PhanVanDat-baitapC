#include<stdio.h>


int main(){
	int soNguyenChoTrc = 27; // gia tri so nguyen cho trc 
	int soNhap;

    printf(" nhap so nguyen cho den khi dung: ");
	
	do{
		scanf ("%d",&soNhap);
		if ( soNhap!= soNguyenChoTrc)
		{
			printf(" ban da nhap sai so nguyen cho trc hay nhap lai: ");
		}
	}while (soNhap != soNguyenChoTrc);
	
	printf(" ban da nhap dung so nguyen cho trc la : %d",soNguyenChoTrc);
	
	
	return 0;
}
