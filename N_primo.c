#include <stdio.h>

int main(){
    int n,i;

    printf("Digite el total de numeros a comprobar: ");
    scanf("%i",&n);

    i = 1;

    while (i<=n)
    {
        if(i%3==0){
            printf("%i.\n",i);
        }

        i++;
    }
    
    getch();

    return 0;
}