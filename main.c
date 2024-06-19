#include <stdio.h>
#include "iaPlaying.h"
#include "playerPlaying.h"
#include "playerPlaying.h"

int main() {
    printf("------------MENU TicTacToe------------\n");
    printf("1. JOUER CONTRE L'IA\n");
    printf("2. JOUER EN LAN\n\n");
    printf("3. Quitter le jeu\n");
    printf("Entrer votre choix : ");
    
    int choix;
    scanf("%d", &choix); // Lire le choix de l'utilisateur en utilisant l'adresse de la variable
    
    switch (choix)
    {
        case 1: // Pas besoin de comparer avec un caractère ici, puisque choix est de type int
            printf("Vous avez choisi de jouer contre l'IA.\n");
            iaPlaying();
            break;
        case 2:
            printf("Vous avez choisi de jouer en LAN.\n");
            playerPlaying();
            break;
        case 3:
            printf("Vous avez choisi de quitter le jeu.\n");
            break;
        default: // Gérer le cas où l'utilisateur entre une valeur invalide
            printf("Choix invalide. Veuillez choisir parmi les options disponibles.Vous appuyer sur %d\n", choix);
            break;
    }

    return 0;
}
