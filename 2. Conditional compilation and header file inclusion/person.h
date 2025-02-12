#ifndef PERSON_H
#define PERSON_H

#define NAME_LENGTH 20

typedef struct {
    char first_name[NAME_LENGTH];
    char last_name[NAME_LENGTH];
    int year_of_birth;
} Person;

#endif 
