#include <stdio.h>

int main (int argc, char *argv[]) {

    int num = 150, a;
    int *x; // puntero x
    x = &num; // almacena la direcion de num
    a = *x;
    
    printf("%d %d %p",num,a,x); // imprime, %p te da la direccion de la variable, %d te da el valor de la variable num
                
    float pi = 3.1415, d;
    float *ptrF; // definicion de puntero
    ptrF = &pi;  // puntero almacena la direccion de pi

    printf("%.3f %.3f %p",pi, d,ptrF); // imprime 

    char l = 'a', c; 
    char *ptrC; // definicion del puntero 
    printf("%c %c  %p",l,c, ptrC);
    return 0;
}