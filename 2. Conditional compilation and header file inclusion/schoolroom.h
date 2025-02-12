#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

#define ROOM_CAPACITY 50

typedef struct {
    int room_number;
    Person people_in_room[ROOM_CAPACITY];
} SchoolRoom;

#endif 