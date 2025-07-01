#include <stdio.h>

void func(int a[]);

int main() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        a[i] = 0;
    }

    func(a);

    for (int j = 0; j < sizeof(a)/sizeof(int); j++) {
        printf("%d\n", a[j]);
    }

    return 0;

}

void func(int a[]) {
    a[0] = 10;
}