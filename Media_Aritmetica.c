#include <stdio.h>

int main(){
    float n1, n2, n3, M;

    printf("Digite el primer numero: "); scanf("%f",&n1);
    printf("Digite el segundo numero: "); scanf("%f",&n2);
    printf("Digite el tercer numero: "); scanf("%f",&n3);

     M=((n1+n2+n3)/3);

     printf("\nLa media aritmetica es: %.2f",M);

    getch();

    return 0;
}