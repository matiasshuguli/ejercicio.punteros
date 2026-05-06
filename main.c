#include <stdio.h>

int main (int argc, char *argv[]) {

    int num = 150, a;
    int *x; // puntero

    x = &num; // almacena la direcion de num
    
    printf("%d %p",num,x); // imprime 
                           // %p  te da la direccion de la variable
                           // %d  te da el valor de num
    return 0