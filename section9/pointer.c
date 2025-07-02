#include <stdio.h>

int main() {
    int *p;
    int a = 10;

    p = &a;
    *p = 20;

    printf("%d, %x\n", a, &a);
    printf("%d, %x\n", *p, p);

    return 0;
}