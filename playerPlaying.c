#include <stdio.h>
#include <stdbool.h>
#include "playerPlaying.h"
char case1 = '1';
char case2 = '2';
char case3 = '3';
char case4 = '4';
char case5 = '5';
char case6 = '6';
char case7 = '7';
char case8 = '8';
char case9 = '9';
void playerPlaying () {
    printf("-------------------\n");
    printf("|  %c  |  %c  |  %c  |\n", case1, case2, case3);
    printf("-------------------\n");
    printf("|  %c  |  %c  |  %c  |\n", case4, case5, case6);
    printf("-------------------\n");
    printf("|  %c  |  %c  |  %c  |\n", case7, case8, case9);
    printf("-------------------\n\n");
    
    while (!gameOver())
    {
        int choix;
        printf("Entrer le numéro de votre case : \n");
        scanf("%d", &choix);
        switch (choix)
        {
            case 1:
                case1 = 'O';
                break;
            case 2:
                case2 = 'O';
                break;
            case 3:
                case3 = 'O';
                break;
            case 4:
                case4 = 'O';
                break;
            case 5:
                case5 = 'O';
                break;
            case 6:
                case6 = 'O';
                break;
            case 7:
                case7 = 'O';
                break;
            case 8:
                case8 = 'O';
                break;
            case 9:
                case9 = 'O';
                break;
                      
            default:
                break;
        }
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", case1, case2, case3);
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", case4, case5, case6);
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", case7, case8, case9);
        printf("-------------------\n\n");

        if(gameOver()){
            break;
        }
        int choix2;
        printf("Entrer le numéro de votre case : \n");
        scanf("%d", &choix2);
        switch (choix2)
        {
            case 1:
                case1 = 'X';
                break;
            case 2:
                case2 = 'X';
                break;
            case 3:
                case3 = 'X';
                break;
            case 4:
                case4 = 'X';
                break;
            case 5:
                case5 = 'X';
                break;
            case 6:
                case6 = 'X';
                break;
            case 7:
                case7 = 'X';
                break;
            case 8:
                case8 = 'X';
                break;
            case 9:
                case9 = 'X';
                break;
                      
            default:
                break;
        }
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", case1, case2, case3);
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", case4, case5, case6);
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", case7, case8, case9);
        printf("-------------------\n\n");


    }


}

bool gameOver(){
    // Vérifier les conditions de victoire
    // Vérifier les lignes
    if ((case1 == case2 && case2 == case3) ||
        (case4 == case5 && case5 == case6) ||
        (case7 == case8 && case8 == case9)) {
        return true; // Victoire sur une ligne
    }
    // Vérifier les colonnes
    if ((case1 == case4 && case4 == case7) ||
        (case2 == case5 && case5 == case8) ||
        (case3 == case6 && case6 == case9)) {
        return true; // Victoire sur une colonne
    }
    // Vérifier les diagonales
    if ((case1 == case5 && case5 == case9) ||
        (case3 == case5 && case5 == case7)) {
        return true; // Victoire sur une diagonale
    }
    // Vérifier si toutes les cases sont occupées
    if (case1 != '1' && case2 != '2' && case3 != '3' &&
        case4 != '4' && case5 != '5' && case6 != '6' &&
        case7 != '7' && case8 != '8' && case9 != '9') {
        return true; // Match nul
    }
    // Si aucune condition de victoire n'est remplie, le jeu continue
    return false;
}