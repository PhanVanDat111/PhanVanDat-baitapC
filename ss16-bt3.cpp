#include <stdio.h>


void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}

int main() {
    int so1 = 7;  
    int so2 = 5;   
    int ketQua = 0;

    
    tinhTong(so1, so2, &ketQua);


    printf("tong cua  %d và %d là: %d\n", so1, so2, ketQua);

    return 0;
}
