#include <stdio.h>
#include "iaPlaying.h"
#include "playerPlaying.h"

void main(){
    printf("------------MENU TicTacToe------------\n");
    printf("1. JOUER CONTRE L'IA\n");
    printf("2. JOUER EN LAN\n\n");
    printf("3. Quitter le jeu\n");
    printf("Entrer votre choix : \n");
    int choix;
    scanf("%d", choix);
    switch (choix)
    {
        case '1':
            iaPlaying();
            break;
        case '2':
            playerPlaying();
            break;
    
        case '3':
            printf("Vous avez quitter le programme\n");
            break;
    }

}