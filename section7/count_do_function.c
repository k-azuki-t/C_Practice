#include <stdio.h>

int count_func(int count);

int main() {

    int num, count;

    // Input the number of times to print "Hello, World!"
    printf("Enter the number of times to print 'Hello, World!': ");
    scanf("%d", &num);

    count = count_func(num);

    // Output the count of "Hello, World!" printed
    printf("Hello, World! printed %d times.\n", count);
    return 0;
}

int count_func(int num) {

    static int count = 0;

    for (int i = 1; i <= num; i++) {
        printf("Hello, World!\n");
        count++;
    }
    
    return count;
}