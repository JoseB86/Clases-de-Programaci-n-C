#include <stdio.h>
#include  <math.h>

int main(){
    float hipt, ca1, ca2;

    printf("Digite los valores de los dos catetos: ");
    scanf("%f %f",&ca1,&ca2);

    hipt = sqrt(pow(ca1,2) + pow(ca2,2));

    printf("El valor calculado de la Hipotenusa es: %.2f",hipt);

    getch();
    
    return 0;
}