#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of customers

    int *rooms = (int *)malloc(1001 * sizeof(int)); // Dynamic allocation for room occupancy
    if (rooms == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 1; i <= 1000; i++) {
        rooms[i] = 0; // Initialize all rooms as unoccupied
    }

    int happyCount = 0;

    for (int i = 1; i <= n; i++) {
        int roomNumber;
        scanf("%d", &roomNumber);

        if (rooms[roomNumber] == 0) {
            // The room is not occupied
            rooms[roomNumber] = 1; // Mark the room as occupied
            happyCount++; // Increment the count of happy customers
        }
    }

    printf("%d\n", happyCount);

    free(rooms); // Free dynamically allocated memory

    return 0;
}