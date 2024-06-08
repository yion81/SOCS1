#include <stdio.h>

int countSetBits(int n) {
    int count = 0; // Initialize a count to 0 to keep track of the number of set bits.
    while (n) { // Continue looping until n becomes 0 (all bits have been processed).
        count += n & 1; // Use the bitwise AND operation (&) with 1 to check the rightmost bit.
        n >>= 1; // Right-shift the integer by one bit to examine the next bit.
    }
    return count; // Return the count of set bits in the integer.
}

int main() {
    int numIntegers;
    printf("Enter the number of integers: ");
    scanf("%d", &numIntegers);

    int integers[numIntegers];

    printf("Enter the integers separated by spaces: ");
    for (int i = 0; i < numIntegers; i++) {
        scanf("%d", &integers[i]);
    }

    int hasAtLeast3Bits = 0;
    int doesNotHave3Bits = 0;

    for (int i = 0; i < numIntegers-1; i++) {
        for (int j = i + 1; j < numIntegers; j++) {
            int xorResult = integers[i] ^ integers[j];
            int setBits = countSetBits(xorResult);

            if (setBits >= 3) {
                hasAtLeast3Bits++;
            } else {
                doesNotHave3Bits++;
            }
        }
    }
    printf("Number of XOR pairs with at least 3 set bits: %d\n", hasAtLeast3Bits);
    printf("Number of XOR pairs without at least 3 set bits: %d\n", doesNotHave3Bits);
    return 0;
}
