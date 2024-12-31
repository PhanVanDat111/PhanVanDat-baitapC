#include<stdio.h>


// ham tao ra ma tran 2 chieu
void taoMaTran(int maTran[][100],int dong,int cot){
	printf("nhap cac cac gia tri cho ma tran: \n");
	for(int i=0;i<dong;i++){
	   for(int j=0;j<cot;j++){
		printf("phan tu thu [%d][%d] : ", i,j);
		scanf("%d",&maTran[i][j]);
	}	
  }
}
// ham in ra ma tran
void inMaTran(int maTran[][100],int dong,int cot){
	printf(" ma tran da nhap: \n");
	for(int i=0;i<dong;i++){
		for(int j=0;j<cot;j++){
			printf("%d",maTran[i][j]);
		}
	}
	printf("\n");
}
int main(){
	int cot, dong;
	int maTran[100][100];
	
	
	printf(" hay nhap vao so dong so cot cua ma tran: ");
	scanf("%d",&dong,&cot);
	
    taoMaTran(maTran,dong,cot);
    inMaTran(maTran,dong,cot);
	
	
}
