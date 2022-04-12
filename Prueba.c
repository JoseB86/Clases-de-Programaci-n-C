#include <stdio.h>
#include <stdlib.h>

int main() {
    int VehTurismo, Veh4x4;    
    int CapLtsTur, CapLts4x4;
    int CantLtstotal;

//  Numero de vehículos y capacidades
    printf ("Introduce el numero de turismos: ");
    scanf ("%d", &VehTurismo);
    printf ("Introduce el numero de todoterrenos: ");
    scanf ("%d", &Veh4x4);
    printf ("Introduce la capacidad de los turismos (litros): ");
    scanf ("%d", &CapLtsTur);
    printf ("Introduce la capacidad de los todoterrenos (litros): ");
    scanf ("%d", &CapLts4x4);

//Cálculo de necesidades de combustible
    CantLtstotal = VehTurismo * CapLtsTur + Veh4x4 * CapLts4x4;
    printf ("Las necesidades de combustible totales son (litros): %d", CantLtstotal);

    getch();
    
    return 0;
}