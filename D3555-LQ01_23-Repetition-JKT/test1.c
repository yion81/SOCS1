#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int length = 0;  // Initialize the length to 0

    // Handle negative numbers by making them positive temporarily
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        num /= 10;  // Divide the number by 10
        length++;    // Increment the length
    }

    if (length == 0) {
        length = 1;  // For the case of the input being zero
    }

    printf("Length of the integer: %d\n", length);

    return 0;
}
