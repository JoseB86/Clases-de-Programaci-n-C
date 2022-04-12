#include <stdio.h>

int main(){
    int option;

    printf("Bienvenido a su peaje La soledad \nSelecciones su vehiculo del siguiente menu: \n1. Turismo \n2. Autobus \n3. Moticleta \n");
    scanf("%i",&option);

    switch (option)
    {
    case 1: printf("El peaje a pagar es de: $500"); break;

    case 2: printf("El peaje a pagar es de: $3000"); break;

    case 3: printf("El peaje a pagar es de: $300"); break;

    default: printf("Vehiculo no autorizado"); break;
    }

    getch();

    return 0;
}