#include <stdio.h>
#include <string.h>
#include "processes.h"

Process processes[MAX_PROCESSES];
int processcount = 0;

static int next_id = 1;

static int nextprocessid(void) {
    if (next_id <= 0) {
        return 0;
    }
    return next_id++;
}

int createnewprocess(const char *name) {
    if (processcount >= MAX_PROCESSES) {
        return 0; 
    }

    int id = nextprocessid();
    if (id == 0) {
        return 0; 
    }

    processes[processcount].id = id;
    strncpy(processes[processcount].name, name, NAME_LENGTH - 1);
    processes[processcount].name[NAME_LENGTH - 1] = '\0'; 

    processcount++;
    return id;
}

void stopprocess(int id) {
    int found = 0;
    for (int i = 0; i < processcount; i++) {
        if (processes[i].id == id) {
            found = 1;
            for (int j = i; j < processcount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processcount--;
            printf("process with ID  is stopped %d\n", id);
            break;
        }
    }
    if (!found) {
        printf("no process found with ID %d.\n", id);
    }
}

void displayprocesses(void) {
    if (processcount == 0) {
        printf("no active processes\n");
        return;
    }

    printf("active processes:\n");
    printf("-----------------\n");
    for (int i = 0; i < processcount; i++) {
        printf("ID: %d\tName: %s\n", processes[i].id, processes[i].name);
    }
}
