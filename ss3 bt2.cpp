#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    //yeu cau nguoi dung nhap nhiet do Celsius
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    //chuyen doi nhiet do thanh Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // hien thi ket qua 
    printf("nhiet do %.2f do Celsius tuong duong voi %.2f do Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
