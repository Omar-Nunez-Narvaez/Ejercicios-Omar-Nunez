#include <stdio.h>

int main() {
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    char *ptr;
    ptr = &vocales[3];  *ptr = 'x';

    
    for (int i = 0; i < 5; i++) {
        printf("%c ", vocales [i]);  
    }


    return 0;
}git add