#include <stdio.h>

int main(){
    float valor, desc, total;

    printf("Digite el valor del articulo: ");
    scanf("%f", &valor);

    desc = valor * 0.15;
    total = valor - desc;

    printf("El valor del articulo con el descuento es: $%.2f",total);

    getch();

    return 0;
}