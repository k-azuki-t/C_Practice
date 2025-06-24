#include <stdio.h>

int main() {
    int a, b, c, d, e;

    a = 'H';
    b = 'e';
    c = 'l';
    d = 'l';
    e = 'o';

    printf("%c%c%c%c%c\n", a, b, c, d, e); // Output: Hello
    printf("%d %d %d %d %d\n", a, b, c, d, e); // Output: ASCII values of characters
    printf("%x %x %x %x %x\n", a, b, c, d, e); 

    return 0;
}