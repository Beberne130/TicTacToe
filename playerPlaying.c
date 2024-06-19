#include <stdio.h>
#include <stdbool.h>
#include "playerPlaying.h"

// Déclaration des variables globales
char caseP1 = '1';
char caseP2 = '2';
char caseP3 = '3';
char caseP4 = '4';
char caseP5 = '5';
char caseP6 = '6';
char caseP7 = '7';
char caseP8 = '8';
char caseP9 = '9';

void playerPlaying() {
    printf("-------------------\n");
    printf("|  %c  |  %c  |  %c  |\n", caseP1, caseP2, caseP3);
    printf("-------------------\n");
    printf("|  %c  |  %c  |  %c  |\n", caseP4, caseP5, caseP6);
    printf("-------------------\n");
    printf("|  %c  |  %c  |  %c  |\n", caseP7, caseP8, caseP9);
    printf("-------------------\n\n");
    
    while (!gameOverPlayer()) {
        int choix;
        printf("Joueur O, entrez le numero de votre case: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: caseP1 = 'O'; break;
            case 2: caseP2 = 'O'; break;
            case 3: caseP3 = 'O'; break;
            case 4: caseP4 = 'O'; break;
            case 5: caseP5 = 'O'; break;
            case 6: caseP6 = 'O'; break;
            case 7: caseP7 = 'O'; break;
            case 8: caseP8 = 'O'; break;
            case 9: caseP9 = 'O'; break;
            default: printf("Choix invalide, reessayez.\n"); continue;
        }
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", caseP1, caseP2, caseP3);
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", caseP4, caseP5, caseP6);
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", caseP7, caseP8, caseP9);
        printf("-------------------\n\n");

        if (gameOverPlayer()) {
            printf("Joueur O gagne ou c'est un match nul!\n");
            break;
        }
        
        int choix2;
        printf("Joueur X, entrez le numero de votre case: ");
        scanf("%d", &choix2);
        switch (choix2) {
            case 1: caseP1 = 'X'; break;
            case 2: caseP2 = 'X'; break;
            case 3: caseP3 = 'X'; break;
            case 4: caseP4 = 'X'; break;
            case 5: caseP5 = 'X'; break;
            case 6: caseP6 = 'X'; break;
            case 7: caseP7 = 'X'; break;
            case 8: caseP8 = 'X'; break;
            case 9: caseP9 = 'X'; break;
            default: printf("Choix invalide, reessayez.\n"); continue;
        }
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", caseP1, caseP2, caseP3);
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", caseP4, caseP5, caseP6);
        printf("-------------------\n");
        printf("|  %c  |  %c  |  %c  |\n", caseP7, caseP8, caseP9);
        printf("-------------------\n\n");

        if (gameOverPlayer()) {
            printf("Joueur X gagne ou c'est un match nul!\n");
            break;
        }
    }
}

bool gameOverPlayer() {
    // Verifier les lignes pour une victoire
    if ((caseP1 == caseP2 && caseP2 == caseP3) ||
        (caseP4 == caseP5 && caseP5 == caseP6) ||
        (caseP7 == caseP8 && caseP8 == caseP9)) {
        return true; // Victoire sur une ligne
    }
    // Verifier les colonnes pour une victoire
    if ((caseP1 == caseP4 && caseP4 == caseP7) ||
        (caseP2 == caseP5 && caseP5 == caseP8) ||
        (caseP3 == caseP6 && caseP6 == caseP9)) {
        return true; // Victoire sur une colonne
    }
    // Verifier les diagonales pour une victoire
    if ((caseP1 == caseP5 && caseP5 == caseP9) ||
        (caseP3 == caseP5 && caseP5 == caseP7)) {
        return true; // Victoire sur une diagonale
    }
    // Verifier pour un match nul
    if (caseP1 != '1' && caseP2 != '2' && caseP3 != '3' &&
        caseP4 != '4' && caseP5 != '5' && caseP6 != '6' &&
        caseP7 != '7' && caseP8 != '8' && caseP9 != '9') {
        return true; // Match nul
    }
    // Si pas de victoire ou de match nul, le jeu continue
    return false;
}
