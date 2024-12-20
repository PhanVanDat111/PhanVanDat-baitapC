#include<stdio.h>


int main ( void){
	int arr[100];// khai bao mang chi co 100 phan tu
	int n,viTri,giaTri;// cac bien co trong mang
	
	// yeu cau nguoi dung nhap vao so phan tu (n<100)
	printf("nhap vao so phan tu ma ban muon(n<100): ");
	scanf("%d",&n);
	
	// kiem tra so phan  tu nguoi dung nhap vao 
	if(n<0|| n>100){
		printf(" nhap so phan tu sai, hay nhap lai ");
		return 1;// dung de thoat chuog trinh
	}
	// nhap cac phan tu vao mang
	
	printf(" nhap cac phan tu vao mang: \n");
	for(int i=0;i<n;i++){
		printf(" phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
    // hien thi mang hien tai
    printf(" hien thi mang hien tai: ");
    for(int i=0;i<n;i++){
		printf( "%d " , arr[i] );
	}
	printf("\n");
	
	// hay nhap vao vitri va giatri muon them
	printf(" nhap gia tri muon them: ");
	scanf("%d",&giaTri);
	
	printf(" nhap vi tri muon them : ");
	scanf("%d",&viTri);
	
	// kiem tra vi tri nhap vao 
	if(viTri<1||viTri>n+1){
		printf(" vi tri ban nhap vao kh hop le.\n");
		return 1; // thoat chuong trinh
	}
	// di chuyen cac phan tu sau vi tri muon chen
	for(int i=n;i>=viTri;i--){
		arr[i]=arr[i-1];
	}
	// chen gia tri vao vi tri
	arr[viTri-1]= giaTri;// thay vitri doi di bang gia tri truyen vao
	n++; // dong thoi tang them phan tu cho mang
	 
	// hien thi mang sau khi da chen phan tu 
	printf (" mang sau khi da chen phan tu: ");
	for(int i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	
	printf("\n");
	
	
	return 0;
}
