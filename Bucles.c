#include <stdio.h>

int main(){
    int i;

    i = 1;

    while (i<=10)
    {
        printf("%i\n",i);
        i++;
    }   
    
    printf("\nEn decreciente\n\n");

     i = 10;

    while (i>=0)
    {
        printf("%i\n",i);
        i--;
    } 

    printf("\nImprimir Asteriscos\n\n");

    i = 1;

    while (i<=5)
    {
        printf("*");
        i++;
    }   

    getch();

    return 0;
}