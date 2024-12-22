#include<stdio.h>



int main (void){
	int arr [10]={1,2,3,4,5,6,7,8,9,10};
	int viTri , giaTriMoi ;
	
	// hien thi cac phan tu cua mang
	printf(" cac phan tu cua mang : ");
	for(int i=0;i<10;i++){
		printf(" %d",arr[i]);
	}
	printf("\n");
	
	// ng dung hay nhap vao vi tri ban muon sua 
	printf(" hay nhap vi tri ma ban muon chinh sua ");
	scanf("%d",&viTri);
	
	// kiem tra vi tri nhap vao co dung yeu cau kh
	if(viTri<0|| viTri>10){
		printf (" ban da nhap sai vi tri hay nhap lai \n");
		return 1; // ket thuc chuong trinh khi nhap sai
	}
	// mhap giatri moi 
	printf("nhap gia tri moi: ");
	scanf("%d",&giaTriMoi);
	
	// ghi de len gia tri cu
		arr[viTri]=giaTriMoi;
	// hien thi mang sau khi da chen gia tri moi xong
	printf(" mang sau khi duoc them gia tri moi : ");
	for(int i=0;i<10;i++){
		printf(" %d ",arr[i]);
	}	
	printf("\n");	
	return 0;
}

