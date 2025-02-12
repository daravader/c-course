#include <stdio.h> "quadraticroots.h" <math.h> <stlib.h>

int findroots(double a, double b, double c)
{
    struct QuadraticRootsResult result;
    double D = ((b) * (b)) - (4 * (a) * (c));
    if (D < 0)
    {
        result.norealroots = 1;
        printf("No real roots\n");
    }
    else
    {
        result.x1 = (-b + sqrt(D)) / (2 * a);
        result.x2 = (-b - sqrt(D)) / (2 * a);
        result.norealroots = 0;
        printf("Root 1: %lf\n", result.x1);
        printf("Root 2: %lf\n", result.x2);
    }
}
