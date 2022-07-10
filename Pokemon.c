#include <stdio.h>

int main(){
    //Stadistic Pikachu
    int H_Pikachu = 100, A_Pikachu = 55;
    
    //Stadistic Jiggly Puff
    int H_Jiggli = 100, A_Jiggli = 45;

    //cicle Variable
    int i, turno;

    for (i = 0; i <= 1; i++){
        turno = 1;
        if(H_Pikachu > 0 && H_Jiggli > 0){
            if(turno == 1 && H_Pikachu > 0){
                printf("Turno de batalla: %i\n", turno);
                printf("Health Jiggli Puff: %i\n", H_Jiggli);
                H_Jiggli = H_Jiggli - A_Pikachu;
                printf("Atack Pikachu: %i\nHealth Jiggli Puff: %i\n\n",A_Pikachu, H_Jiggli);
                    turno = 0;     
            }
            if(turno == 0 && H_Jiggli > 0){
                printf("Turno de batalla: %i\n", turno);
                printf("Health Pikachu: %i\n", H_Pikachu);
                H_Pikachu = H_Pikachu - A_Jiggli;
                printf("Atack Jiggli Puff: %i\nHealth Pikachu: %i\n\n",A_Jiggli, H_Pikachu);
                    turno = 1;
            }
            else{
                if (H_Pikachu = 0)
                {
                    printf("Pikachu KO\nBattle Finished\nJiggly Puff Win");
                }
                else{
                    printf("Jiggly Puff KO\nBattle Finished\nPikachu Win");
                }
            }
        }
    }

    getch();

    return 0;      
}
