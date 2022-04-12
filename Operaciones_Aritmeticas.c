#include <stdio.h>

int main(){
    int n1, n2, suma=0, resta=0, mult=0, div=0;

    //printf("Digite el primer numero: ");
    //scanf("%i", &n1);

    //printf("Digite el segundo numero: ");
    //scanf("%i", &n2);

    printf("Digite 2 numero: ");
    scanf("%i %i", &n1,&n2);

    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf("La suma es: %i",suma);
    printf("\nLa resta es: %i",resta);
    printf("\nLa multiplicacion es: %i",mult);
    printf("\nLa division es: %i",div);

    getch();

    return 0;
}