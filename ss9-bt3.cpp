#include<stdio.h>


int main (){
	int arr[100]; // kich thuoc toi da cua mang
	int kichThuoc, viTri;
	
	// yeu cau nhap vao so phan tu muon nhap 
	printf("nhap vao so phan tu muon nhap: ");
	scanf("%d",&kichThuoc);
	
	// kiem tra kich thuoc cua mang co hop le hay kh
	if(kichThuoc<0||kichThuoc>100){
		printf("ban da nhap sai kich thuoc cua mang \n");
		return 1;
	}
	// nhap phan tu vao mang
	printf(" nhap cac phhan tu trong mang : \n");
	for(int i=0;i<kichThuoc;i++){
		printf("phan thu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	// nhap vi tri ma ng dung can xoa
	printf("nhap vi tri can xoa: ",kichThuoc-1);
	scanf("%d",&viTri);
	
	// kiem tra vi tri co hop le hay khong
	if(viTri<0|| viTri>=kichThuoc){
		printf("vi ban nhap vao khong hop le \n");
		return 1;
	}
	// doi can phan tu de ghi de vi tri phan tu da xoa
	for(int i= viTri ;i < kichThuoc-1 ; i++){
		arr[i]=arr[i+1];
	
	}
		kichThuoc--; // giam kich thuoc cua mang sau khi xoa phan tu
	// hien thi mang sau khi xoa phan tu
	printf(" mang sau khi xoa phan tu : ");
	for(int i=0;i<kichThuoc;i++){
		printf("%d",arr[i]);
		
	}
	
	printf("\n");
	
	
	return 0;
}
