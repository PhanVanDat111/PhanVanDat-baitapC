#include<stdio.h>


int main(){
	int n;// nhap so nguyen n
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	
	// kiem tra gia tri ban dau
	if (n<=0){
		printf(" ban vui long nhap mot so nguyen duong lon hon 0 .\n");
		return 1 ; //ket thuc chuong trinh 
	} 
	 
	 printf (" cac uoc cua %d la: ",n);
	 // tim cac uoc cua n
	 for (int a=1; a<=n;a++){
	 	if (n % a==0){
	 		printf (" cac uoc cua %d ",a);
	 		
	 	}
	 } 
	 
	 printf("\n");
	return 0; 
} 
