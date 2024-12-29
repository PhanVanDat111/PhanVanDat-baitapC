#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
        return n * factorial(n - 1); 
    }
}

int main() {
    int number;
    
    
    printf("Nhap mot so nguyen de tinh giai thua: ");
    scanf("%d", &number);
    
    
    int result = factorial(number);
    

    printf("Giai thua cua  %d là: %d\n", number, result);
    
    return 0;
}
