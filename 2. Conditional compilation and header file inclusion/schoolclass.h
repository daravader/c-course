#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

#define CLASS_SIZE 26

typedef struct {
    Person students[CLASS_SIZE];
    char class_letter;
    int class_number;
    Person class_leader;
} SchoolClass;

#endif 