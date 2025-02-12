#include "schoolclass.h"
#include "schoolroom.h"

#define SCHOOL_CLASS_COUNT 20
#define SCHOOL_ROOM_COUNT 10

typedef struct {
    SchoolClass school_classes[SCHOOL_CLASS_COUNT];
    SchoolRoom school_rooms[SCHOOL_ROOM_COUNT];
} School;

int main() {
    School mySchool;
    return 0;
}