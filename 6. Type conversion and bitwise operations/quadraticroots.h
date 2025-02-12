 #include <stdio.h>

#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H
typedef struct {
    double x1;         
    double x2;         
} QuadraticRootsResult;

void findRoots(double a, double b, double c);
#endif
