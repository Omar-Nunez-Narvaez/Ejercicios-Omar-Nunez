#include <stdio.h>

int main() {
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    char *ptr = vocales;  

  
    for (int i = 0; i < 5; i++) {
        printf("%c ", *(ptr + i));  
    }

    
    return 0;
}