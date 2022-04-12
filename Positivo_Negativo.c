#include <stdio.h>

int main(){
    int x;

    printf("Digite un numero: "); scanf("%i",&x);

    if(x>0){

        printf("El numero es positivo");
    }

    if(x<0){

        printf("El numero es negativo");
    }

    getch();

    return 0;
}