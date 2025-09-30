#include <stdio.h>

int main() {
    char block1, block2, block3;
    scanf("%c %c %c", &block1, &block2, &block3);

    // Compare the characters and determine their order
    if (block1 <= block2 && block1 <= block3) {
        printf("1 ");
        if (block2 <= block3) {
            printf("2 3\n");
        } else {
            printf("3 2\n");
        }
    } else if (block2 <= block1 && block2 <= block3) {
        printf("2 ");
        if (block1 <= block3) {
            printf("1 3\n");
        } else {
            printf("3 1\n");
        }
    } else {
        printf("3 ");
        if (block1 <= block2) {
            printf("1 2\n");
        } else {
            printf("2 1\n");
        }
    }

    return 0;
}