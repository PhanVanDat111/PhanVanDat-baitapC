#include <stdio.h>

/
int sum(int a, int b) {
    return a + b; 
}

int main() {
    int num1, num2;


    printf("nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("nhap so thu hai: ");
    scanf("%d", &num2);

 
    int total = sum(num1, num2);

  
    printf("tonmg cua %d va %d la: %d\n", num1, num2, total);

    return 0;
}
