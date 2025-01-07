#include <stdio.h>


void inMang(int *arr, int size) {
    printf("cac phan tu trong mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(mang) / sizeof(mang[0]);

    inMang(mang, size);

    return 0;
}
