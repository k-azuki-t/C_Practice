#include <stdio.h>
#include <string.h>

int main() {
    char str[256];
    int str_len;
    memset(str, 0x00, sizeof(str));

    scanf("%s", str);
    str_len = strlen(str);

    for (int i = str_len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}