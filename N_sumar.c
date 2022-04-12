#include <stdio.h>

int main(){
    int cont, n, suma=0;

    print ("Digite el total de numero a sumar: "); 
    scanf("%i",&n);

    cont = 1;

    while (cont <= n)
    {
        suma =+ cont;
        cont++;
    }
    
    printf("\nLa suma es: %i",suma);

    getch();

    return 0;
}