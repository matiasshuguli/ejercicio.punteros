#include <stdio.h>

int main(int argc, char *argv[]) {

    float num = 150.5;
    float *x; // puntero a float

    x = &num; // dirección de num

    printf("%f %p", num, x); // %f para float, %p para dirección

    return 0;
}