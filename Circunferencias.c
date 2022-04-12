#include <stdio.h>
#include  <math.h>

int main(){
    float L, d;

    printf("Digite el diametro de la circunferencia: ");
    scanf("%f",&d);

    L = (M_PI*d);

    printf("El valor calculado de la longitud de la circunferencia es: %.2f",L);

    getch();

    return 0;
}