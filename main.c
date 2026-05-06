#include <stdio.h>

int main (int argc, char *argv[]) {

    int num = 150, a;
    int *x; // puntero x

    x = &num; // almacena la direcion de num
    
    printf("%d %p",num,x); // imprime 
                           // %p  te da la direccion de la variable
                           // %d  te da el valor de la variable num

    float pi = 3.1415, d;
    float *ptrF; 
    ptrF = &pi;
    printf("%f %p",pi,ptrF); // imprime 
    return 0;
}