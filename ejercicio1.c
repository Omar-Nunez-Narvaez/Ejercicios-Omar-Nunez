#include <stdio.h>

int main() {
    int arreglo[] = {3, 6, 9, 12, 15, 18};
    int *ptr = arreglo;  

    for (int i = 0; i < 6; i++) {
        printf("%d ", *(ptr + i));  
    }

    printf("\n");
    return 0;
}