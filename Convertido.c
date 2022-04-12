#include <stdio.h>

int main(){
    float C, F;

    printf("Digite el valor de la temperatura en grados Celsis: ");
    scanf("%f", &C);

    F = ((C*1.8) + 32);

    printf("El valor de la temperatura en grados Farenheit es: %.2f",F);

    getch();
    
    return 0;
}