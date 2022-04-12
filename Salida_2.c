#include <stdio.h>

int main() {
    char x[50];

    printf("Digite su nombre: ");
    gets(x);

    printf("Su nombre es: %s",x);

    getch();

    return 0; 
}