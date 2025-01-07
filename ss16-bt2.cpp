#include<stdio.h>


void doiGiaTri( int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main (){
	int var1=20;
	int var2=15;
	
	printf(" gia tri cua 1 va 2 khi chua chuyen doi : var1=%d va var2=%d ",var1,var2);
	
	doiGiaTri(&var1,&var2);
	
	printf(" gia tri cua 1 va 2 khi da chuyen doi: var1=%d va var2=%d",var1,var2);
	
	
	
	return 0;
}
