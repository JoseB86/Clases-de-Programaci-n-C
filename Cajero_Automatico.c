#include <stdio.h>

int main(){
    int opcion;
    float saldo = 100, agregar, retirar;
    
    printf("\tBienvenido a su Cajero Virtual");
    printf("\n1. Ingreso en cuenta");
    printf("\n2. Retirar dinero de la cuenta");
    printf("\n3. Salir");
    printf("\nOpcion: ");
    scanf("%i",&opcion);

    switch (opcion)
    {
    case 1:
        printf("\nCuanto dinero desea ingresar en la cuenta: ");
        scanf("%f",&agregar);
        saldo+=agregar;
        printf("El saldo total es de: %.2f", saldo);
        break;

    case 2:
        printf("\nCuanto dinero desea retirar: ");
        scanf("%f",&retirar);
        if (retirar > saldo)
        {
            printf("La cantidad a retirar es mayor al saldo");
        }
        else
        {
            saldo-=retirar;
            printf("El saldo disponible es de: %.2f", saldo);
        }
        break;

    case 3:
        break;
    
    default:
        printf("\nSe equivoco de opcion de menu");
        break;
    }

    getch();

    return 0;
}