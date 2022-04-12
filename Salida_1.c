#include <stdio.h>

int main() {
    int a;
    float b;
    char s;

    printf("Digite el valor de la variable a: ");
    scanf("%i",&a);

    printf("Digite el valor de la variable b: ");
    scanf("%f",&b);

    printf("Digite el valor de la variable c: ");
    scanf("%c",&s);

    printf("\nEl valor es: %i",a);

    printf("\nEl valor es: %.1f",b);

    printf("\nEl valor es: %c",s);


    getch();

    return 0; 
}