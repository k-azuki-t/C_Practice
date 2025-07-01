#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    float ave;
    
    for(int i = 0; i < sizeof(array)/sizeof(int); i++) {
        ave += array[i];
    }
    ave = ave / (sizeof(array)/sizeof(int));

    printf("Average: %.2f\n", ave);

    return 0;
}