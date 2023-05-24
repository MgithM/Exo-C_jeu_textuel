#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int joueurScore = 0;
int ordinateurScore = 0;

char* cartes[] = {"As", "Roi", "Dame", "Valet", "10", "9", "8", "7", "6", "5", "4", "3", "2"};
char* couleurs[] = {"Coeur", "Carreau", "Trèfle", "Pique"};

void afficherCartes() {
    printf("\nCartes disponibles:\n");
    for (int i = 0; i < 13; i++) {
        printf("%d. %s\n", i+1, cartes[i]);
    }
}

void afficherCouleurs() {
    printf("\nCouleurs disponibles:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i+1, couleurs[i]);
    }
}

int tirerCarteAleatoire() {
    return rand() % 13;
}

int tirerCouleurAleatoire() {
    return rand() % 4;
}

int main() {
    srand(time(0));

    printf("Bienvenue dans le jeu de cartes !\n");

    int choixCarte, choixCouleur;

    afficherCartes();
    printf("Choisissez une carte (1-13): ");
    scanf("%d", &choixCarte);

    afficherCouleurs();
    printf("Choisissez une couleur (1-4): ");
    scanf("%d", &choixCouleur);

    int carteOrdinateur = tirerCarteAleatoire();
    int couleurOrdinateur = tirerCouleurAleatoire();

    printf("\nVous avez choisi la carte %s de %s.\n", cartes[choixCarte-1], couleurs[choixCouleur-1]);
    printf("L'ordinateur a choisi la carte %s de %s.\n", cartes[carteOrdinateur], couleurs[couleurOrdinateur]);

    if (choixCarte == carteOrdinateur && choixCouleur == couleurOrdinateur) {
        printf("\nBravo ! Vous avez gagné !\n");
        joueurScore++;
    } else {
        printf("\nDommage, vous avez perdu.\n");
        ordinateurScore++;
    }

    printf("\nScores:\n");
    printf("Joueur: %d\n", joueurScore);
    printf("Ordinateur: %d\n", ordinateurScore);

    return 0;
}
