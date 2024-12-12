#include<stdio.h>


int main(){    int gioLam; //so gio lam viec trong thang
    printf("nhap gio lam trong 1 thang: %d");
    scanf("%d",&gioLam);
    
    
	float tien1Gio; // so tien lam trong 1 gio
	printf(" nhap so tien lam trong 1 gio: %f");
	scanf("%f",&tien1Gio);
	
	//muc luong co ban trong 1 thang
	int coBan=gioLam*tien1Gio;
	printf("tien luong co ban: %d\n",coBan);
	
	
	if(gioLam > 160)
	{
		int phuCap=coBan*0.1;
		printf("tien phu cap la: %d\n",phuCap);
	}		
 	return 0;
}
