#include <stdio.h>


int findMax(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max; 
}

int main() {
    int array[] = {3, 5, 7, 2, 8, -1, 4, 10, 12}; 
    int size = sizeof(array) / sizeof(array[0]); 

   
    int max = findMax(array, size);

 
    printf("so lon nhat trong mang la: %d\n", max);

    return 0;
}
