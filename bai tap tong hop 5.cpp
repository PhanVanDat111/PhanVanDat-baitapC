#include<stdio.h>
#include<math.h>

int main(){
	int n,a=1;// nhap so nguyen n, gia dinh a la 1 so nguyen to
	printf("nhap so nguyen duong n: ");
	scanf("%d",&n);
	
	

    // Kiem tra dieu kien
    if (n <= 1) {
        printf("%d khong phai la so nguyen to .\n", n);
        return 0;
    }

    //kiem tra so nguyen to
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
      a = 0;
            break;
        }
    }

	// ket qua
	if(a == 1)
	{
		printf("%d la mot so nguyen to",n);
	}
	else
	{
		printf("%d khong phai la mot so nguyen to",n);
	}
	return 0;
}

