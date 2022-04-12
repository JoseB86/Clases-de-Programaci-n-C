#include <stdio.h>
#include  <math.h>

int main(){
    float n;

    printf("Digite un numero: "); scanf("%f",&n);

    if (n>0)
    {
        n = sqrt(n);
        printf("La raiz cuadrada es: %.2f", n);
    }
    else{
        printf("%.f tiene raiz imaginaria",n);
    }
    
    getch();

    return 0;
}