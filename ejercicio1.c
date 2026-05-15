#include <stdio.h>

int main() {
    int arreglo[] = {3, 6, 9, 12, 15, 18};
    int *ptr;
    ptr = &arreglo [0];  // ptr = arreglo;  

    for (int i = 0; i < 6; i++) {
        printf("arrglo[%d] = %d ", i, arreglo[i]);
        printf("%d\ngit add .", *(ptr + i));  
    }

    printf("\n");
    return 0;
}