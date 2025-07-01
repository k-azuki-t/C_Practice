#include <stdio.h>
#include <string.h>

typedef struct Human {
    int age;
    char name[10];
} Human_a;

void func();

int main() {

    Human_a man;

    man.age = 20;
    strcpy(man.name, "John");

    printf("name: %s\nage is %d\n", man.name, man.age);

    func(man);
    printf("name: %s\nage is %d\n", man.name, man.age);

    return 0;
}

void func(Human_a man) {
    man.age = 30;
    strcpy(man.name, "Doe");
}