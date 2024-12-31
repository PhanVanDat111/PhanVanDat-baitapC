#include <stdio.h>


int uocChungLonNhat(int a, int b) {
    if (b == 0) {
        return a;
    }
    return uocChungLonNhat(b, a % b);
}

int main() {
    int num1, num2;
    printf("so nguyen thu 1: ");
    scanf("%d", &num1);
    printf("so nguyen thap 2: ");
    scanf("%d", &num2);
    int ucln = uocChungLonNhat(num1, num2);

   
    printf("uoc chung lon nhat cua %d va %d la: %d\n", num1,num2, ucln);

    return 0;
}
