#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <string.h>

typedef struct {
    long result;
    char error[100];
} transformation;

transformation string_to_integer(const char *input);

#endif 
