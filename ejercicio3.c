#include <stdio.h>

int main() {
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 5; i++) {
        printf("%c ", vocales[i]);
    }

    printf("\n");
    return 0;
}