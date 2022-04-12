#include <stdio.h>

int main(){
    float a, b, A, h;

    printf("Digite la base mayor: "); scanf("%f",&a);
    printf("Digite la base menor: "); scanf("%f",&b);
    printf("Digite la altura: "); scanf("%f",&h);

    A = (((a+b)/2)*h);

    printf("\nEl area del trapecio es: %.2f",A);

    getch();

    return 0;
}