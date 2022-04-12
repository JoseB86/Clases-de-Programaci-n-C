#include <stdio.h>

int main() {
    char a = 'e'; //tamaño = 1byte Rango: 0..255
    short b = -15; //tamaño = 2byte Rango: -128..127
    int c = 1024; //tamaño = 2byte Rango: 0..32767
    unsigned int d = 128; //tamaño = 2byte Rango: 0..65535
    long e = 12345; //tamaño = 4byte Rango: -2147483637..2147483637
    float f = 15.678; //tamaño = 4byte Rango: -3.4*(10)..3.4*(10)
    double m = 123123.123123; //tamaño = 1byte Rango: -1.7*(10)..1.7*(10)

    printf("\nEl elemento es: %c",a);
    printf("\nEl elemento es: %i",b);
    printf("\nEl elemento es: %i",c);
    printf("\nEl elemento es: %i",d);
    printf("\nEl elemento es: %li",e);
    printf("\nEl elemento es: %f",f);
    printf("\nEl elemento es: %lf",m);

    getch();

    return 0; 
}