#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "processes.h"

#define BUFFER_SIZE 100

void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    int choice;
    char buffer[BUFFER_SIZE];
    char process_name[NAME_LENGTH];
    int process_id;

    while (1) {
        printf("\n=== Task Manager ===\n");
        printf("1. Create Process\n");
        printf("2. Display All Processes\n");
        printf("3. Stop Process\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Error reading input. Please try again.\n");
            continue;
        }

        choice = atoi(buffer);

        switch (choice) {
            case 1:
                if (processcount >= MAX_PROCESSES) {
                    printf("Maximum number of running processes reached. Please stop a process before creating a new one.\n");
                    break;
                }
                printf("Enter process name (max %d characters): ", NAME_LENGTH - 1);
                if (fgets(process_name, sizeof(process_name), stdin) == NULL) {
                    printf("Error reading process name.\n");
                    break;
                }
                process_name[strcspn(process_name, "\n")] = '\0';

                process_id = createnewprocess(process_name);
                if (process_id != 0) {
                    printf("Process created with ID %d.\n", process_id);
                } else {
                    printf("Failed to create process. Please try again.\n");
                }
                break;

            case 2:
                displayprocesses();
                break;

            case 3:
                if (processcount == 0) {
                    printf("No processes to stop.\n");
                    break;
                }
                printf("Enter process ID to stop: ");
                if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
                    printf("Error reading process ID.\n");
                    break;
                }
                process_id = atoi(buffer);
                if (process_id <= 0) {
                    printf("Invalid process ID.\n");
                    break;
                }
                stopprocess(process_id);
                break;

            case 4:
                printf("Exiting Task Manager. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice. Please select a valid option.\n");
                break;
        }
    }

    return 0;
}
