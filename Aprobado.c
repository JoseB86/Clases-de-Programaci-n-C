#include <stdio.h>

int main(){
    float examen;

    printf("Digite la nota del examen: "); scanf("%f",&examen);

    if(examen > 10.5){
        //printf("El alumno esta aprobado");
        puts("El alumno esta aprobado");
    }

    getch();

    return 0;
}