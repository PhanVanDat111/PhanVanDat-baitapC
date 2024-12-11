#include <stdio.h>

int main() {
    float toan, van, anh, tong, trungBinh;

    // Yêu cau nhap diem 
    printf("Nhap diem toan: ");
    scanf("%f", &toan);

    printf("Nhap diem van: ");
    scanf("%f", &van);

    printf("nhap diem anh: ");
    scanf("%f", &anh);

    // tinh tong diem trung binh 
    tong = toan + van + anh;
    trungBinh = tong / 3;

    // hien ket qua 
    printf("tong diem: %.2f\n", tong);
    printf("diem trung binh: %.2f\n", trungBinh);

    return 0;
}
