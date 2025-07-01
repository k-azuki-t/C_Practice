#include <stdio.h>

int main() {
    struct X {
        char a;
        int b;
    };

    printf("Size of struct X: %d bytes\n", sizeof(struct X));
    
    return 0;
}