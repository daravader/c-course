#include <stdio.h>
#define NUM_ROOMS 8

void toggleLight(unsigned char *state, int room) {
    *state ^= (1 << (room - 1)); 
}

void roomswithlightson(unsigned char state) {
    printf("The lights in these rooms are on: ");
    int lightson = 0;
    for (int i = 0; i < NUM_ROOMS; i++) {
        if (state & (1 << i)) {
            printf("%d ", i + 1);
            lightson = 1;
        }
    }
    if (!lightson) {
        printf("none");
    }
    printf("\n");
}

int main() {
    unsigned char lights = 0; // All lights start off
    int choice, room;

    while (1) {
        printf("\nSmart House !!!\n");
        printf("1. Switch lights\n");
        printf("2. Check light states\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter room number (1-%d) to toggle: ", NUM_ROOMS);
                scanf("%d", &room);
                if (room >= 1 && room <= NUM_ROOMS) {
                    toggleLight(&lights, room);
                    printf("Light in room %d has been toggled.\n", room);
                } else {
                    printf("Invalid room number.\n");
                }
                break;
            case 2:
                roomswithlightson(lights);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
