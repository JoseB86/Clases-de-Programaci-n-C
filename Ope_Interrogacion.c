#include <stdio.h>

int main(){
    int numero;

    print("Digite el numero :");
    scanf("%i",&numero);

    (numero%2==0) ? printf("El numero es par") : printf("El numero es impar");

    getch();

    return 0;
}