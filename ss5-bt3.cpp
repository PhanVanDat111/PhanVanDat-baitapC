#include<stdio.h>


int main(){
	int soNguyenDuong,sum ;// nhap gia tri nguyen duong 
    printf (" nhap mot so nguyen duong: ");
	 scanf ("%d",&soNguyenDuong);
	 
	 
	 // tong gia tri 1-soNguyenDuong
	 for ( int i=1 ;i <= soNguyenDuong ; i++ )
	 {
	 	 sum += i ; 
	 }	 
	// ket qua
	printf ("tong gia tri tu 1 den so nguyen la: %d",sum); 
	
	
	return 0; 
} 
