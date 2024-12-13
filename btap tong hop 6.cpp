#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0; // khong phai la so nguyen to
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; //khong phai la so nguyen to
    }
    return 1; // la so nguyen to
}

int main() {
    int n, count = 0, current = 2;

    // nhap so nguyen duong n
    printf("nhap so nguyen duong n: ");
    scanf("%d", &n);

    // tim va in ra so nguyen to
    printf("%d so nguyen to dau tien la:\n", n);
    while (count < n) {
        if (isPrime(current)) {
            printf("%d ", current);
            count++;
        }
        current++;
    }

    return 0;
}
